// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gpio_interfaces/msg/detail/gpio_result__rosidl_typesupport_introspection_c.h"
#include "gpio_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gpio_interfaces/msg/detail/gpio_result__functions.h"
#include "gpio_interfaces/msg/detail/gpio_result__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gpio_interfaces__msg__GPIOResult__init(message_memory);
}

void gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_fini_function(void * message_memory)
{
  gpio_interfaces__msg__GPIOResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_message_member_array[7] = {
  {
    "temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpio_interfaces__msg__GPIOResult, temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpio_interfaces__msg__GPIOResult, imu_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpio_interfaces__msg__GPIOResult, imu_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpio_interfaces__msg__GPIOResult, imu_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpio_interfaces__msg__GPIOResult, gps_lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpio_interfaces__msg__GPIOResult, gps_lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_alt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gpio_interfaces__msg__GPIOResult, gps_alt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_message_members = {
  "gpio_interfaces__msg",  // message namespace
  "GPIOResult",  // message name
  7,  // number of fields
  sizeof(gpio_interfaces__msg__GPIOResult),
  false,  // has_any_key_member_
  gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_message_member_array,  // message members
  gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_init_function,  // function to initialize message memory (memory has to be allocated)
  gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_message_type_support_handle = {
  0,
  &gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_message_members,
  get_message_typesupport_handle_function,
  &gpio_interfaces__msg__GPIOResult__get_type_hash,
  &gpio_interfaces__msg__GPIOResult__get_type_description,
  &gpio_interfaces__msg__GPIOResult__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gpio_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpio_interfaces, msg, GPIOResult)() {
  if (!gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_message_type_support_handle.typesupport_identifier) {
    gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gpio_interfaces__msg__GPIOResult__rosidl_typesupport_introspection_c__GPIOResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
