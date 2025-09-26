// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from boat_data_interfaces:msg/CANMotorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "boat_data_interfaces/msg/detail/can_motor_data__rosidl_typesupport_introspection_c.h"
#include "boat_data_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "boat_data_interfaces/msg/detail/can_motor_data__functions.h"
#include "boat_data_interfaces/msg/detail/can_motor_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  boat_data_interfaces__msg__CANMotorData__init(message_memory);
}

void boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_fini_function(void * message_memory)
{
  boat_data_interfaces__msg__CANMotorData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_message_member_array[8] = {
  {
    "voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces__msg__CANMotorData, voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_mv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces__msg__CANMotorData, throttle_mv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces__msg__CANMotorData, throttle_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces__msg__CANMotorData, rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces__msg__CANMotorData, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces__msg__CANMotorData, motor_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces__msg__CANMotorData, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces__msg__CANMotorData, power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_message_members = {
  "boat_data_interfaces__msg",  // message namespace
  "CANMotorData",  // message name
  8,  // number of fields
  sizeof(boat_data_interfaces__msg__CANMotorData),
  false,  // has_any_key_member_
  boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_message_member_array,  // message members
  boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_init_function,  // function to initialize message memory (memory has to be allocated)
  boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_message_type_support_handle = {
  0,
  &boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_message_members,
  get_message_typesupport_handle_function,
  &boat_data_interfaces__msg__CANMotorData__get_type_hash,
  &boat_data_interfaces__msg__CANMotorData__get_type_description,
  &boat_data_interfaces__msg__CANMotorData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_boat_data_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, boat_data_interfaces, msg, CANMotorData)() {
  if (!boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_message_type_support_handle.typesupport_identifier) {
    boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &boat_data_interfaces__msg__CANMotorData__rosidl_typesupport_introspection_c__CANMotorData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
