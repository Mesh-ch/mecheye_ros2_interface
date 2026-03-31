from math import atan2, cos, radians, sin, sqrt
from pathlib import Path

import yaml


def load_calibration(calibration_file):
    calibration_path = Path(calibration_file).expanduser()
    if not calibration_path.exists():
        raise FileNotFoundError(f"Calibration file '{calibration_path}' does not exist.")

    with calibration_path.open("r", encoding="utf-8") as handle:
        calibration = yaml.safe_load(handle) or {}

    camera_frame = calibration.get("camera_frame", "mechmind_camera_link")
    camera_optical_frame = calibration.get("camera_optical_frame", "mechmind_camera_optical_frame")
    external_calibration = calibration.get("external_calibration", {})
    camera_optical_transform = calibration.get("camera_optical_transform", {})

    external_frame_id = external_calibration.get("frame_id", "tool_base")
    external_child_frame_id = external_calibration.get("child_frame_id", camera_frame)
    if camera_frame not in {external_frame_id, external_child_frame_id}:
        raise ValueError(
            "The external calibration must reference 'camera_frame' as either frame_id or "
            "child_frame_id."
        )

    return {
        "camera_frame": camera_frame,
        "camera_optical_frame": camera_optical_frame,
        "external_calibration": _parse_transform(
            external_calibration,
            default_frame_id=external_frame_id,
            default_child_frame_id=external_child_frame_id,
        ),
        "camera_optical_transform": _parse_transform(
            camera_optical_transform,
            default_frame_id=camera_frame,
            default_child_frame_id=camera_optical_frame,
            default_roll=-1.57079632679,
            default_pitch=0.0,
            default_yaw=-1.57079632679,
        ),
    }


def transform_arguments(transform, frame_id, child_frame_id):
    return [
        "--x",
        str(transform["x"]),
        "--y",
        str(transform["y"]),
        "--z",
        str(transform["z"]),
        "--roll",
        str(transform["roll"]),
        "--pitch",
        str(transform["pitch"]),
        "--yaw",
        str(transform["yaw"]),
        "--frame-id",
        frame_id,
        "--child-frame-id",
        child_frame_id,
    ]


def _parse_transform(
    transform_config,
    *,
    default_frame_id,
    default_child_frame_id,
    default_roll=0.0,
    default_pitch=0.0,
    default_yaw=0.0,
):
    translation = transform_config.get("translation", {})
    x = translation.get("x", transform_config.get("x", 0.0))
    y = translation.get("y", transform_config.get("y", 0.0))
    z = translation.get("z", transform_config.get("z", 0.0))

    if {"roll", "pitch", "yaw"} <= transform_config.keys():
        roll = transform_config["roll"]
        pitch = transform_config["pitch"]
        yaw = transform_config["yaw"]
    else:
        roll, pitch, yaw = _parse_axis_angle_rotation(
            transform_config,
            default_roll=default_roll,
            default_pitch=default_pitch,
            default_yaw=default_yaw,
        )

    return {
        "frame_id": transform_config.get("frame_id", default_frame_id),
        "child_frame_id": transform_config.get("child_frame_id", default_child_frame_id),
        "x": x,
        "y": y,
        "z": z,
        "roll": roll,
        "pitch": pitch,
        "yaw": yaw,
    }


def _parse_axis_angle_rotation(transform_config, *, default_roll, default_pitch, default_yaw):
    axis = transform_config.get("rotation_axis")
    if not axis:
        return default_roll, default_pitch, default_yaw

    axis_x = axis.get("x", 0.0)
    axis_y = axis.get("y", 0.0)
    axis_z = axis.get("z", 0.0)
    axis_norm = sqrt(axis_x * axis_x + axis_y * axis_y + axis_z * axis_z)
    if axis_norm == 0.0:
        raise ValueError("rotation_axis must be non-zero.")

    axis_x /= axis_norm
    axis_y /= axis_norm
    axis_z /= axis_norm

    if "rotation_angle_deg" in transform_config:
        angle = radians(transform_config["rotation_angle_deg"])
    else:
        angle = transform_config.get("rotation_angle_rad", 0.0)

    return _axis_angle_to_rpy(axis_x, axis_y, axis_z, angle)


def _axis_angle_to_rpy(axis_x, axis_y, axis_z, angle):
    cos_angle = cos(angle)
    sin_angle = sin(angle)
    one_minus_cos = 1.0 - cos_angle

    r00 = cos_angle + axis_x * axis_x * one_minus_cos
    r01 = axis_x * axis_y * one_minus_cos - axis_z * sin_angle
    r02 = axis_x * axis_z * one_minus_cos + axis_y * sin_angle
    r10 = axis_y * axis_x * one_minus_cos + axis_z * sin_angle
    r11 = cos_angle + axis_y * axis_y * one_minus_cos
    r12 = axis_y * axis_z * one_minus_cos - axis_x * sin_angle
    r20 = axis_z * axis_x * one_minus_cos - axis_y * sin_angle
    r21 = axis_z * axis_y * one_minus_cos + axis_x * sin_angle
    r22 = cos_angle + axis_z * axis_z * one_minus_cos

    sy = sqrt(r00 * r00 + r10 * r10)
    singular = sy < 1e-6

    if not singular:
        roll = atan2(r21, r22)
        pitch = atan2(-r20, sy)
        yaw = atan2(r10, r00)
    else:
        roll = atan2(-r12, r11)
        pitch = atan2(-r20, sy)
        yaw = 0.0

    return roll, pitch, yaw
