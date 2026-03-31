from pathlib import Path

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from calibration_helper import load_calibration, transform_arguments


DEFAULT_CALIBRATION_FILE = (
    Path(__file__).resolve().parents[1] / "config" / "mecheye_calibration_31_03_2026.yaml"
)


def _launch_setup(context, *args, **kwargs):
    calibration = load_calibration(LaunchConfiguration("calibration_file").perform(context))
    camera_ip = LaunchConfiguration("camera_ip").perform(context)

    return [
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            arguments=transform_arguments(
                calibration["external_calibration"],
                calibration["external_calibration"]["frame_id"],
                calibration["external_calibration"]["child_frame_id"],
            ),
        ),
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            arguments=transform_arguments(
                calibration["camera_optical_transform"],
                calibration["camera_frame"],
                calibration["camera_optical_frame"],
            ),
        ),
        Node(
            package="mecheye_ros_interface",
            executable="start",
            name="mechmind_camera_publisher_service",
            output="screen",
            parameters=[
                {"save_file": True},
                {"camera_ip": camera_ip},
                {"use_external_intri": False},
                {"fx": 1727.4641025602748},
                {"fy": 1727.4586926701952},
                {"u": 655.8180825729554},
                {"v": 516.6306500606158},
                {"color_frame_id": calibration["camera_optical_frame"]},
                {"depth_frame_id": calibration["camera_optical_frame"]},
                {"point_cloud_frame_id": calibration["camera_optical_frame"]},
                {"textured_point_cloud_frame_id": calibration["camera_optical_frame"]},
            ],
        ),
    ]


def generate_launch_description():
    return LaunchDescription(
        [
            DeclareLaunchArgument(
                "camera_ip",
                default_value="192.168.1.108",
                description="IP address of the Mech-Eye camera",
            ),
            DeclareLaunchArgument(
                "calibration_file",
                default_value=str(DEFAULT_CALIBRATION_FILE),
                description="YAML file that defines the external calibration TFs",
            ),
            OpaqueFunction(function=_launch_setup),
        ]
    )
