from setuptools import find_packages
from setuptools import setup

setup(
    name='boat_data_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('boat_data_interfaces', 'boat_data_interfaces.*')),
)
