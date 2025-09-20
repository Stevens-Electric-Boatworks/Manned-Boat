// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from boat_data_interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice
#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "boat_data_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "boat_data_interfaces/msg/detail/motor_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_serialize_boat_data_interfaces__msg__MotorData(
  const boat_data_interfaces__msg__MotorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_deserialize_boat_data_interfaces__msg__MotorData(
  eprosima::fastcdr::Cdr &,
  boat_data_interfaces__msg__MotorData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t get_serialized_size_boat_data_interfaces__msg__MotorData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t max_serialized_size_boat_data_interfaces__msg__MotorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
bool cdr_serialize_key_boat_data_interfaces__msg__MotorData(
  const boat_data_interfaces__msg__MotorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t get_serialized_size_key_boat_data_interfaces__msg__MotorData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
size_t max_serialized_size_key_boat_data_interfaces__msg__MotorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_boat_data_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, boat_data_interfaces, msg, MotorData)();

#ifdef __cplusplus
}
#endif

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
