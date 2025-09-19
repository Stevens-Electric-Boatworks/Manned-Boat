// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from boat_data_interfaces:msg/ElectricalData.idl
// generated code does not contain a copyright notice

#include "boat_data_interfaces/msg/detail/electrical_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_boat_data_interfaces
const rosidl_type_hash_t *
boat_data_interfaces__msg__ElectricalData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x7a, 0x34, 0x8b, 0xb0, 0xfd, 0xed, 0x22,
      0x58, 0xb7, 0xeb, 0x94, 0x3c, 0xd5, 0x69, 0x74,
      0xbc, 0x7c, 0xc5, 0x9e, 0xff, 0xc3, 0x12, 0x47,
      0xce, 0x91, 0xd3, 0x9a, 0x63, 0x71, 0xa4, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char boat_data_interfaces__msg__ElectricalData__TYPE_NAME[] = "boat_data_interfaces/msg/ElectricalData";

// Define type names, field names, and default values
static char boat_data_interfaces__msg__ElectricalData__FIELD_NAME__vbat[] = "vbat";
static char boat_data_interfaces__msg__ElectricalData__FIELD_NAME__vebat[] = "vebat";
static char boat_data_interfaces__msg__ElectricalData__FIELD_NAME__temp_bat[] = "temp_bat";
static char boat_data_interfaces__msg__ElectricalData__FIELD_NAME__battery_percent[] = "battery_percent";
static char boat_data_interfaces__msg__ElectricalData__FIELD_NAME__current_bat[] = "current_bat";
static char boat_data_interfaces__msg__ElectricalData__FIELD_NAME__bms_temp[] = "bms_temp";
static char boat_data_interfaces__msg__ElectricalData__FIELD_NAME__can_bus_util_percent[] = "can_bus_util_percent";

static rosidl_runtime_c__type_description__Field boat_data_interfaces__msg__ElectricalData__FIELDS[] = {
  {
    {boat_data_interfaces__msg__ElectricalData__FIELD_NAME__vbat, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__ElectricalData__FIELD_NAME__vebat, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__ElectricalData__FIELD_NAME__temp_bat, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__ElectricalData__FIELD_NAME__battery_percent, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__ElectricalData__FIELD_NAME__current_bat, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__ElectricalData__FIELD_NAME__bms_temp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__ElectricalData__FIELD_NAME__can_bus_util_percent, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
boat_data_interfaces__msg__ElectricalData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {boat_data_interfaces__msg__ElectricalData__TYPE_NAME, 39, 39},
      {boat_data_interfaces__msg__ElectricalData__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 vbat\n"
  "float32 vebat\n"
  "float32 temp_bat\n"
  "uint8 battery_percent\n"
  "uint8 current_bat\n"
  "int8 bms_temp\n"
  "uint8 can_bus_util_percent\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
boat_data_interfaces__msg__ElectricalData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {boat_data_interfaces__msg__ElectricalData__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 126, 126},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
boat_data_interfaces__msg__ElectricalData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *boat_data_interfaces__msg__ElectricalData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
