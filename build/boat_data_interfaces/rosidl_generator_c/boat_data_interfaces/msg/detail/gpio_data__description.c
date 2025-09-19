// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from boat_data_interfaces:msg/GPIOData.idl
// generated code does not contain a copyright notice

#include "boat_data_interfaces/msg/detail/gpio_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_boat_data_interfaces
const rosidl_type_hash_t *
boat_data_interfaces__msg__GPIOData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xd8, 0xf1, 0xf8, 0x29, 0xf9, 0x12, 0x79,
      0xbe, 0x04, 0x0e, 0x67, 0x65, 0xd4, 0xaf, 0x6c,
      0x43, 0x40, 0xfa, 0x88, 0x84, 0x96, 0xd6, 0xbc,
      0x3f, 0x32, 0xa5, 0x1d, 0xf8, 0xbc, 0xce, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char boat_data_interfaces__msg__GPIOData__TYPE_NAME[] = "boat_data_interfaces/msg/GPIOData";

// Define type names, field names, and default values
static char boat_data_interfaces__msg__GPIOData__FIELD_NAME__coolant_temp[] = "coolant_temp";
static char boat_data_interfaces__msg__GPIOData__FIELD_NAME__throttle[] = "throttle";

static rosidl_runtime_c__type_description__Field boat_data_interfaces__msg__GPIOData__FIELDS[] = {
  {
    {boat_data_interfaces__msg__GPIOData__FIELD_NAME__coolant_temp, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__GPIOData__FIELD_NAME__throttle, 8, 8},
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
boat_data_interfaces__msg__GPIOData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {boat_data_interfaces__msg__GPIOData__TYPE_NAME, 33, 33},
      {boat_data_interfaces__msg__GPIOData__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 coolant_temp\n"
  "uint8 throttle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
boat_data_interfaces__msg__GPIOData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {boat_data_interfaces__msg__GPIOData__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
boat_data_interfaces__msg__GPIOData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *boat_data_interfaces__msg__GPIOData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
