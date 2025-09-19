// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from boat_data_interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "boat_data_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "boat_data_interfaces/msg/detail/motor_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace boat_data_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
cdr_serialize(
  const boat_data_interfaces::msg::MotorData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  boat_data_interfaces::msg::MotorData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
get_serialized_size(
  const boat_data_interfaces::msg::MotorData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
max_serialized_size_MotorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
cdr_serialize_key(
  const boat_data_interfaces::msg::MotorData & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
get_serialized_size_key(
  const boat_data_interfaces::msg::MotorData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
max_serialized_size_key_MotorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace boat_data_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_boat_data_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, boat_data_interfaces, msg, MotorData)();

#ifdef __cplusplus
}
#endif

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
