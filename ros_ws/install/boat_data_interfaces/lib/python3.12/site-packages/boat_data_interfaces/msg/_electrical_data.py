# generated from rosidl_generator_py/resource/_idl.py.em
# with input from boat_data_interfaces:msg/ElectricalData.idl
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


class Metaclass_ElectricalData(type):
    """Metaclass of message 'ElectricalData'."""

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
                'boat_data_interfaces.msg.ElectricalData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__electrical_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__electrical_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__electrical_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__electrical_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__electrical_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ElectricalData(metaclass=Metaclass_ElectricalData):
    """Message class 'ElectricalData'."""

    __slots__ = [
        '_vbat',
        '_vebat',
        '_temp_bat',
        '_battery_percent',
        '_current_bat',
        '_bms_temp',
        '_can_bus_util_percent',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'vbat': 'float',
        'vebat': 'float',
        'temp_bat': 'float',
        'battery_percent': 'uint8',
        'current_bat': 'uint8',
        'bms_temp': 'int8',
        'can_bus_util_percent': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.vbat = kwargs.get('vbat', float())
        self.vebat = kwargs.get('vebat', float())
        self.temp_bat = kwargs.get('temp_bat', float())
        self.battery_percent = kwargs.get('battery_percent', int())
        self.current_bat = kwargs.get('current_bat', int())
        self.bms_temp = kwargs.get('bms_temp', int())
        self.can_bus_util_percent = kwargs.get('can_bus_util_percent', int())

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
        if self.vbat != other.vbat:
            return False
        if self.vebat != other.vebat:
            return False
        if self.temp_bat != other.temp_bat:
            return False
        if self.battery_percent != other.battery_percent:
            return False
        if self.current_bat != other.current_bat:
            return False
        if self.bms_temp != other.bms_temp:
            return False
        if self.can_bus_util_percent != other.can_bus_util_percent:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vbat(self):
        """Message field 'vbat'."""
        return self._vbat

    @vbat.setter
    def vbat(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vbat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vbat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vbat = value

    @builtins.property
    def vebat(self):
        """Message field 'vebat'."""
        return self._vebat

    @vebat.setter
    def vebat(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vebat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vebat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vebat = value

    @builtins.property
    def temp_bat(self):
        """Message field 'temp_bat'."""
        return self._temp_bat

    @temp_bat.setter
    def temp_bat(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'temp_bat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_bat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_bat = value

    @builtins.property
    def battery_percent(self):
        """Message field 'battery_percent'."""
        return self._battery_percent

    @battery_percent.setter
    def battery_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'battery_percent' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery_percent' field must be an unsigned integer in [0, 255]"
        self._battery_percent = value

    @builtins.property
    def current_bat(self):
        """Message field 'current_bat'."""
        return self._current_bat

    @current_bat.setter
    def current_bat(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_bat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_bat' field must be an unsigned integer in [0, 255]"
        self._current_bat = value

    @builtins.property
    def bms_temp(self):
        """Message field 'bms_temp'."""
        return self._bms_temp

    @bms_temp.setter
    def bms_temp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bms_temp' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'bms_temp' field must be an integer in [-128, 127]"
        self._bms_temp = value

    @builtins.property
    def can_bus_util_percent(self):
        """Message field 'can_bus_util_percent'."""
        return self._can_bus_util_percent

    @can_bus_util_percent.setter
    def can_bus_util_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'can_bus_util_percent' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_bus_util_percent' field must be an unsigned integer in [0, 255]"
        self._can_bus_util_percent = value
