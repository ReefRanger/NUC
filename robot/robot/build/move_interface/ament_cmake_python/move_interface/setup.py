from setuptools import find_packages
from setuptools import setup

setup(
    name='move_interface',
    version='0.0.0',
    packages=find_packages(
        include=('move_interface', 'move_interface.*')),
)
