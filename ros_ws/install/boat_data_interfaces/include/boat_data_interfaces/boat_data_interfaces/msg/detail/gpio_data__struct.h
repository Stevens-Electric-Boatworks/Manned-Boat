// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boat_data_interfaces:msg/GPIOData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/gpio_data.h"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__STRUCT_H_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GPIOData in the package boat_data_interfaces.
typedef struct boat_data_interfaces__msg__GPIOData
{
  float coolant_temp;
  uint8_t throttle;
} boat_data_interfaces__msg__GPIOData;

// Struct for a sequence of boat_data_interfaces__msg__GPIOData.
typedef struct boat_data_interfaces__msg__GPIOData__Sequence
{
  boat_data_interfaces__msg__GPIOData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boat_data_interfaces__msg__GPIOData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__GPIO_DATA__STRUCT_H_
