// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from boat_data_interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "boat_data_interfaces/msg/detail/motor_data__functions.h"
#include "boat_data_interfaces/msg/detail/motor_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace boat_data_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) boat_data_interfaces::msg::MotorData(_init);
}

void MotorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<boat_data_interfaces::msg::MotorData *>(message_memory);
  typed_message->~MotorData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorData_message_member_array[4] = {
  {
    "rpm_a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces::msg::MotorData, rpm_a),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rpm_b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces::msg::MotorData, rpm_b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_synch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces::msg::MotorData, motor_synch),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "propulsion_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces::msg::MotorData, propulsion_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorData_message_members = {
  "boat_data_interfaces::msg",  // message namespace
  "MotorData",  // message name
  4,  // number of fields
  sizeof(boat_data_interfaces::msg::MotorData),
  false,  // has_any_key_member_
  MotorData_message_member_array,  // message members
  MotorData_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorData_message_members,
  get_message_typesupport_handle_function,
  &boat_data_interfaces__msg__MotorData__get_type_hash,
  &boat_data_interfaces__msg__MotorData__get_type_description,
  &boat_data_interfaces__msg__MotorData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace boat_data_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boat_data_interfaces::msg::MotorData>()
{
  return &::boat_data_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boat_data_interfaces, msg, MotorData)() {
  return &::boat_data_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
