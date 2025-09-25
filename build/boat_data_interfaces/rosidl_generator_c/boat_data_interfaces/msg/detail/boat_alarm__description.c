// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from boat_data_interfaces:msg/BoatAlarm.idl
// generated code does not contain a copyright notice

#include "boat_data_interfaces/msg/detail/boat_alarm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_boat_data_interfaces
const rosidl_type_hash_t *
boat_data_interfaces__msg__BoatAlarm__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xbc, 0xcd, 0x66, 0xf9, 0x35, 0xab, 0x44,
      0xe1, 0x99, 0x90, 0x5e, 0xd5, 0x84, 0xe1, 0xff,
      0xa3, 0xf2, 0x6f, 0xc7, 0x60, 0x3a, 0x70, 0x98,
      0x87, 0xd7, 0x34, 0x1b, 0xe2, 0xad, 0xe9, 0x88,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char boat_data_interfaces__msg__BoatAlarm__TYPE_NAME[] = "boat_data_interfaces/msg/BoatAlarm";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char boat_data_interfaces__msg__BoatAlarm__FIELD_NAME__error_code[] = "error_code";
static char boat_data_interfaces__msg__BoatAlarm__FIELD_NAME__timestamp[] = "timestamp";

static rosidl_runtime_c__type_description__Field boat_data_interfaces__msg__BoatAlarm__FIELDS[] = {
  {
    {boat_data_interfaces__msg__BoatAlarm__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {boat_data_interfaces__msg__BoatAlarm__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription boat_data_interfaces__msg__BoatAlarm__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
boat_data_interfaces__msg__BoatAlarm__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {boat_data_interfaces__msg__BoatAlarm__TYPE_NAME, 34, 34},
      {boat_data_interfaces__msg__BoatAlarm__FIELDS, 2, 2},
    },
    {boat_data_interfaces__msg__BoatAlarm__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 error_code\n"
  "builtin_interfaces/Time timestamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
boat_data_interfaces__msg__BoatAlarm__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {boat_data_interfaces__msg__BoatAlarm__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
boat_data_interfaces__msg__BoatAlarm__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *boat_data_interfaces__msg__BoatAlarm__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
