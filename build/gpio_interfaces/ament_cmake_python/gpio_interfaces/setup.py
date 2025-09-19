from setuptools import find_packages
from setuptools import setup

setup(
    name='gpio_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('gpio_interfaces', 'gpio_interfaces.*')),
)
