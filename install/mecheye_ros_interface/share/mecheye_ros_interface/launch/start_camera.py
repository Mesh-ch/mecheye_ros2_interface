from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            arguments=[
                '--x', '0',
                '--y', '0',
                '--z', '1',
                '--roll', '0',
                '--pitch', '0',
                '--yaw', '0',
                '--frame-id', 'map',
                '--child-frame-id', '/mechmind_camera/point_cloud',
            ]
        ),
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            arguments=[
                '--x', '0',
                '--y', '0',
                '--z', '1',
                '--roll', '0',
                '--pitch', '0',
                '--yaw', '0',
                '--frame-id', 'map',
                '--child-frame-id', '/mechmind_camera/textured_point_cloud',
            ]
        ),
        Node(
            package="mecheye_ros_interface",
            executable="start",
            name="mechmind_camera_publisher_service",
            output="screen",
            parameters=[
                {"save_file": True},
                {"camera_ip": "172.20.112.1"},   # change to your camera ip
                {"use_external_intri": False},
                {"fx": 1727.4641025602748},
                {"fy": 1727.4586926701952},
                {"u": 655.8180825729554},
                {"v": 516.6306500606158}
            ]
        )
    ])
