// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boat_data_interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/motor_data.h"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_H_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorData in the package boat_data_interfaces.
typedef struct boat_data_interfaces__msg__MotorData
{
  uint8_t rpm_a;
  uint8_t rpm_b;
  float motor_synch;
  float propulsion_angle;
} boat_data_interfaces__msg__MotorData;

// Struct for a sequence of boat_data_interfaces__msg__MotorData.
typedef struct boat_data_interfaces__msg__MotorData__Sequence
{
  boat_data_interfaces__msg__MotorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boat_data_interfaces__msg__MotorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_H_
