// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpio_interfaces/msg/gpio_result.h"


#ifndef GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__STRUCT_H_
#define GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GPIOResult in the package gpio_interfaces.
typedef struct gpio_interfaces__msg__GPIOResult
{
  int64_t temp;
  float imu_x;
  float imu_y;
  float imu_z;
  float gps_lat;
  float gps_lon;
  float gps_alt;
} gpio_interfaces__msg__GPIOResult;

// Struct for a sequence of gpio_interfaces__msg__GPIOResult.
typedef struct gpio_interfaces__msg__GPIOResult__Sequence
{
  gpio_interfaces__msg__GPIOResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpio_interfaces__msg__GPIOResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPIO_INTERFACES__MSG__DETAIL__GPIO_RESULT__STRUCT_H_
