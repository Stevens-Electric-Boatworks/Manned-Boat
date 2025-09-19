# generated from rosidl_generator_py/resource/_idl.py.em
# with input from boat_data_interfaces:msg/MotionData.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionData(type):
    """Metaclass of message 'MotionData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('boat_data_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'boat_data_interfaces.msg.MotionData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionData(metaclass=Metaclass_MotionData):
    """Message class 'MotionData'."""

    __slots__ = [
        '_heading',
        '_speed',
        '_gps_lat',
        '_gps_long',
        '_gps_alt',
        '_imu_x',
        '_imu_y',
        '_imu_z',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'heading': 'int8',
        'speed': 'uint8',
        'gps_lat': 'float',
        'gps_long': 'float',
        'gps_alt': 'float',
        'imu_x': 'float',
        'imu_y': 'float',
        'imu_z': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.heading = kwargs.get('heading', int())
        self.speed = kwargs.get('speed', int())
        self.gps_lat = kwargs.get('gps_lat', float())
        self.gps_long = kwargs.get('gps_long', float())
        self.gps_alt = kwargs.get('gps_alt', float())
        self.imu_x = kwargs.get('imu_x', float())
        self.imu_y = kwargs.get('imu_y', float())
        self.imu_z = kwargs.get('imu_z', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.heading != other.heading:
            return False
        if self.speed != other.speed:
            return False
        if self.gps_lat != other.gps_lat:
            return False
        if self.gps_long != other.gps_long:
            return False
        if self.gps_alt != other.gps_alt:
            return False
        if self.imu_x != other.imu_x:
            return False
        if self.imu_y != other.imu_y:
            return False
        if self.imu_z != other.imu_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'heading' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'heading' field must be an integer in [-128, 127]"
        self._heading = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed' field must be an unsigned integer in [0, 255]"
        self._speed = value

    @builtins.property
    def gps_lat(self):
        """Message field 'gps_lat'."""
        return self._gps_lat

    @gps_lat.setter
    def gps_lat(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gps_lat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gps_lat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gps_lat = value

    @builtins.property
    def gps_long(self):
        """Message field 'gps_long'."""
        return self._gps_long

    @gps_long.setter
    def gps_long(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gps_long' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gps_long' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gps_long = value

    @builtins.property
    def gps_alt(self):
        """Message field 'gps_alt'."""
        return self._gps_alt

    @gps_alt.setter
    def gps_alt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gps_alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gps_alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gps_alt = value

    @builtins.property
    def imu_x(self):
        """Message field 'imu_x'."""
        return self._imu_x

    @imu_x.setter
    def imu_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'imu_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_x = value

    @builtins.property
    def imu_y(self):
        """Message field 'imu_y'."""
        return self._imu_y

    @imu_y.setter
    def imu_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'imu_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_y = value

    @builtins.property
    def imu_z(self):
        """Message field 'imu_z'."""
        return self._imu_z

    @imu_z.setter
    def imu_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'imu_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_z = value
