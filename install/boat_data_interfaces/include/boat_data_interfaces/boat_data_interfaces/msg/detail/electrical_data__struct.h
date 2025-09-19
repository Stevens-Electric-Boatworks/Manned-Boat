// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from boat_data_interfaces:msg/ElectricalData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/electrical_data.h"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__STRUCT_H_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ElectricalData in the package boat_data_interfaces.
typedef struct boat_data_interfaces__msg__ElectricalData
{
  float vbat;
  float vebat;
  float temp_bat;
  uint8_t battery_percent;
  uint8_t current_bat;
  int8_t bms_temp;
  uint8_t can_bus_util_percent;
} boat_data_interfaces__msg__ElectricalData;

// Struct for a sequence of boat_data_interfaces__msg__ElectricalData.
typedef struct boat_data_interfaces__msg__ElectricalData__Sequence
{
  boat_data_interfaces__msg__ElectricalData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} boat_data_interfaces__msg__ElectricalData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__ELECTRICAL_DATA__STRUCT_H_
