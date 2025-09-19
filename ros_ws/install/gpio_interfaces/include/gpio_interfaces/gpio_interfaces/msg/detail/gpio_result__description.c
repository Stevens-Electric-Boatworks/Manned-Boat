// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gpio_interfaces:msg/GPIOResult.idl
// generated code does not contain a copyright notice

#include "gpio_interfaces/msg/detail/gpio_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gpio_interfaces
const rosidl_type_hash_t *
gpio_interfaces__msg__GPIOResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0x82, 0x2f, 0x8c, 0x03, 0x36, 0xd3, 0x48,
      0xbc, 0x33, 0xe8, 0xfc, 0xfa, 0x6c, 0x57, 0xb0,
      0xd3, 0xb8, 0xf5, 0xb8, 0x24, 0xbd, 0xa1, 0xff,
      0x59, 0xad, 0xac, 0xcb, 0x58, 0x19, 0x82, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char gpio_interfaces__msg__GPIOResult__TYPE_NAME[] = "gpio_interfaces/msg/GPIOResult";

// Define type names, field names, and default values
static char gpio_interfaces__msg__GPIOResult__FIELD_NAME__temp[] = "temp";

static rosidl_runtime_c__type_description__Field gpio_interfaces__msg__GPIOResult__FIELDS[] = {
  {
    {gpio_interfaces__msg__GPIOResult__FIELD_NAME__temp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gpio_interfaces__msg__GPIOResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gpio_interfaces__msg__GPIOResult__TYPE_NAME, 30, 30},
      {gpio_interfaces__msg__GPIOResult__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 temp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gpio_interfaces__msg__GPIOResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gpio_interfaces__msg__GPIOResult__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gpio_interfaces__msg__GPIOResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gpio_interfaces__msg__GPIOResult__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
