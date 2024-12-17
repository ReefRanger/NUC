from setuptools import find_packages
from setuptools import setup

setup(
    name='godown_interface',
    version='0.0.0',
    packages=find_packages(
        include=('godown_interface', 'godown_interface.*')),
)
