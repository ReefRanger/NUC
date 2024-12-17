from setuptools import find_packages
from setuptools import setup

setup(
    name='gototable_interface',
    version='0.0.0',
    packages=find_packages(
        include=('gototable_interface', 'gototable_interface.*')),
)
