// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from canopen_interfaces:msg/COData.idl
// generated code does not contain a copyright notice

#include "canopen_interfaces/msg/detail/co_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__msg__COData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0x4a, 0xa4, 0x99, 0x2e, 0x71, 0x02, 0xaa,
      0x6f, 0xa1, 0xd5, 0x79, 0x69, 0x32, 0xc1, 0xd7,
      0xe2, 0x97, 0x6c, 0xe7, 0xc5, 0x9e, 0x8a, 0xc2,
      0xc0, 0x4e, 0xc1, 0x62, 0xd7, 0x90, 0x97, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char canopen_interfaces__msg__COData__TYPE_NAME[] = "canopen_interfaces/msg/COData";

// Define type names, field names, and default values
static char canopen_interfaces__msg__COData__FIELD_NAME__index[] = "index";
static char canopen_interfaces__msg__COData__FIELD_NAME__subindex[] = "subindex";
static char canopen_interfaces__msg__COData__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field canopen_interfaces__msg__COData__FIELDS[] = {
  {
    {canopen_interfaces__msg__COData__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__msg__COData__FIELD_NAME__subindex, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__msg__COData__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
canopen_interfaces__msg__COData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__msg__COData__TYPE_NAME, 29, 29},
      {canopen_interfaces__msg__COData__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 index\n"
  "uint8 subindex\n"
  "uint32 data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__msg__COData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__msg__COData__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__msg__COData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__msg__COData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
