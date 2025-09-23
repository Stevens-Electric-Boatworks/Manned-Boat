// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boat_data_interfaces:msg/BoatAlarm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/boat_alarm.h"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__STRUCT_H_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/BoatAlarm in the package boat_data_interfaces.
typedef struct boat_data_interfaces__msg__BoatAlarm
{
  uint8_t error_code;
  builtin_interfaces__msg__Time timestamp;
} boat_data_interfaces__msg__BoatAlarm;

// Struct for a sequence of boat_data_interfaces__msg__BoatAlarm.
typedef struct boat_data_interfaces__msg__BoatAlarm__Sequence
{
  boat_data_interfaces__msg__BoatAlarm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boat_data_interfaces__msg__BoatAlarm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__BOAT_ALARM__STRUCT_H_
