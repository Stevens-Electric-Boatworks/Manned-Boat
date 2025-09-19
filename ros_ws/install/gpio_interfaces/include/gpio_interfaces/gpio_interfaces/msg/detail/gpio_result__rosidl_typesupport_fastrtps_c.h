// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice
#ifndef GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "gpio_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gpio_interfaces/msg/detail/gpio_result__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpio_interfaces
bool cdr_serialize_gpio_interfaces__msg__GPIOResult(
  const gpio_interfaces__msg__GPIOResult * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpio_interfaces
bool cdr_deserialize_gpio_interfaces__msg__GPIOResult(
  eprosima::fastcdr::Cdr &,
  gpio_interfaces__msg__GPIOResult * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpio_interfaces
size_t get_serialized_size_gpio_interfaces__msg__GPIOResult(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpio_interfaces
size_t max_serialized_size_gpio_interfaces__msg__GPIOResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpio_interfaces
bool cdr_serialize_key_gpio_interfaces__msg__GPIOResult(
  const gpio_interfaces__msg__GPIOResult * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpio_interfaces
size_t get_serialized_size_key_gpio_interfaces__msg__GPIOResult(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpio_interfaces
size_t max_serialized_size_key_gpio_interfaces__msg__GPIOResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gpio_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpio_interfaces, msg, GPIOResult)();

#ifdef __cplusplus
}
#endif

#endif  // GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
