// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from boat_data_interfaces:msg/Alarm.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "boat_data_interfaces/msg/detail/alarm__functions.h"
#include "boat_data_interfaces/msg/detail/alarm__struct.hpp"
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

void Alarm_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) boat_data_interfaces::msg::Alarm(_init);
}

void Alarm_fini_function(void * message_memory)
{
  auto typed_message = static_cast<boat_data_interfaces::msg::Alarm *>(message_memory);
  typed_message->~Alarm();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Alarm_message_member_array[2] = {
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces::msg::Alarm, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(boat_data_interfaces::msg::Alarm, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Alarm_message_members = {
  "boat_data_interfaces::msg",  // message namespace
  "Alarm",  // message name
  2,  // number of fields
  sizeof(boat_data_interfaces::msg::Alarm),
  false,  // has_any_key_member_
  Alarm_message_member_array,  // message members
  Alarm_init_function,  // function to initialize message memory (memory has to be allocated)
  Alarm_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Alarm_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Alarm_message_members,
  get_message_typesupport_handle_function,
  &boat_data_interfaces__msg__Alarm__get_type_hash,
  &boat_data_interfaces__msg__Alarm__get_type_description,
  &boat_data_interfaces__msg__Alarm__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace boat_data_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<boat_data_interfaces::msg::Alarm>()
{
  return &::boat_data_interfaces::msg::rosidl_typesupport_introspection_cpp::Alarm_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, boat_data_interfaces, msg, Alarm)() {
  return &::boat_data_interfaces::msg::rosidl_typesupport_introspection_cpp::Alarm_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
