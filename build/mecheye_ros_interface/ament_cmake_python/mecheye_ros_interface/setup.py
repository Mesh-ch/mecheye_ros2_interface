from setuptools import find_packages
from setuptools import setup

setup(
    name='mecheye_ros_interface',
    version='0.0.2',
    packages=find_packages(
        include=('mecheye_ros_interface', 'mecheye_ros_interface.*')),
)
