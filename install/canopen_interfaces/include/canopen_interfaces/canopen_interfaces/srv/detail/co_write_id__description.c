// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from canopen_interfaces:srv/COWriteID.idl
// generated code does not contain a copyright notice

#include "canopen_interfaces/srv/detail/co_write_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__COWriteID__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x74, 0xe2, 0x89, 0x2f, 0x03, 0xf1, 0xdb,
      0x27, 0x7d, 0xac, 0x8a, 0xc3, 0xd9, 0xbd, 0x69,
      0x5e, 0x83, 0x2f, 0x26, 0xc6, 0x76, 0x24, 0x65,
      0xb8, 0xd3, 0x19, 0x4a, 0xa2, 0xa7, 0x04, 0x20,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__COWriteID_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x9e, 0x55, 0xf1, 0xe3, 0x35, 0xa9, 0x2f,
      0x94, 0x55, 0xb1, 0x6b, 0x37, 0xea, 0x0b, 0x76,
      0x42, 0x90, 0x04, 0xea, 0x17, 0xb0, 0xba, 0xce,
      0x03, 0xec, 0xdd, 0x31, 0x0e, 0xef, 0xa0, 0x22,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__COWriteID_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x97, 0x81, 0xa9, 0x9b, 0x4f, 0x99, 0x58,
      0xa2, 0x1d, 0x83, 0xca, 0x0a, 0xb1, 0xb4, 0xe2,
      0xbd, 0x6c, 0xbf, 0x0f, 0x90, 0x69, 0x50, 0x1c,
      0x97, 0xb7, 0x8e, 0xc6, 0x44, 0x9f, 0xd8, 0x1d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__COWriteID_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0xa4, 0x91, 0x49, 0xac, 0x51, 0xd4, 0x4e,
      0x05, 0xd8, 0xed, 0xf7, 0xa8, 0xfd, 0x19, 0x9c,
      0x61, 0xbc, 0x70, 0x8c, 0x75, 0x09, 0xab, 0xb9,
      0x23, 0xb3, 0x56, 0x0c, 0xff, 0x75, 0xe9, 0x1d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char canopen_interfaces__srv__COWriteID__TYPE_NAME[] = "canopen_interfaces/srv/COWriteID";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char canopen_interfaces__srv__COWriteID_Event__TYPE_NAME[] = "canopen_interfaces/srv/COWriteID_Event";
static char canopen_interfaces__srv__COWriteID_Request__TYPE_NAME[] = "canopen_interfaces/srv/COWriteID_Request";
static char canopen_interfaces__srv__COWriteID_Response__TYPE_NAME[] = "canopen_interfaces/srv/COWriteID_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char canopen_interfaces__srv__COWriteID__FIELD_NAME__request_message[] = "request_message";
static char canopen_interfaces__srv__COWriteID__FIELD_NAME__response_message[] = "response_message";
static char canopen_interfaces__srv__COWriteID__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__COWriteID__FIELDS[] = {
  {
    {canopen_interfaces__srv__COWriteID__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__COWriteID_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__COWriteID_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__COWriteID_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription canopen_interfaces__srv__COWriteID__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
canopen_interfaces__srv__COWriteID__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__COWriteID__TYPE_NAME, 32, 32},
      {canopen_interfaces__srv__COWriteID__FIELDS, 3, 3},
    },
    {canopen_interfaces__srv__COWriteID__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = canopen_interfaces__srv__COWriteID_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = canopen_interfaces__srv__COWriteID_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = canopen_interfaces__srv__COWriteID_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__nodeid[] = "nodeid";
static char canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__index[] = "index";
static char canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__subindex[] = "subindex";
static char canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__data[] = "data";
static char canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__canopen_datatype[] = "canopen_datatype";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__COWriteID_Request__FIELDS[] = {
  {
    {canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__nodeid, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__subindex, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Request__FIELD_NAME__canopen_datatype, 16, 16},
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
canopen_interfaces__srv__COWriteID_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__COWriteID_Request__TYPE_NAME, 40, 40},
      {canopen_interfaces__srv__COWriteID_Request__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__COWriteID_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__COWriteID_Response__FIELDS[] = {
  {
    {canopen_interfaces__srv__COWriteID_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
canopen_interfaces__srv__COWriteID_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__COWriteID_Response__TYPE_NAME, 41, 41},
      {canopen_interfaces__srv__COWriteID_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__COWriteID_Event__FIELD_NAME__info[] = "info";
static char canopen_interfaces__srv__COWriteID_Event__FIELD_NAME__request[] = "request";
static char canopen_interfaces__srv__COWriteID_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__COWriteID_Event__FIELDS[] = {
  {
    {canopen_interfaces__srv__COWriteID_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {canopen_interfaces__srv__COWriteID_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {canopen_interfaces__srv__COWriteID_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription canopen_interfaces__srv__COWriteID_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COWriteID_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
canopen_interfaces__srv__COWriteID_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__COWriteID_Event__TYPE_NAME, 38, 38},
      {canopen_interfaces__srv__COWriteID_Event__FIELDS, 3, 3},
    },
    {canopen_interfaces__srv__COWriteID_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = canopen_interfaces__srv__COWriteID_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = canopen_interfaces__srv__COWriteID_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 CANOPEN_DATATYPE_INT8 = 0x02\n"
  "uint8 CANOPEN_DATATYPE_INT16 = 0x03\n"
  "uint8 CANOPEN_DATATYPE_INT32 = 0x04\n"
  "uint8 CANOPEN_DATATYPE_UINT8 = 0x05\n"
  "uint8 CANOPEN_DATATYPE_UINT16 = 0x06\n"
  "uint8 CANOPEN_DATATYPE_UINT32 = 0x07\n"
  "\n"
  "int8 nodeid\n"
  "uint16 index\n"
  "uint8 subindex\n"
  "uint32 data\n"
  "# 8 = uint8_t, 16 = uint16_t, 32 = uint32_t\n"
  "uint8 canopen_datatype\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__COWriteID__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__COWriteID__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 354, 354},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__COWriteID_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__COWriteID_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__COWriteID_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__COWriteID_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__COWriteID_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__COWriteID_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__COWriteID__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__COWriteID__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *canopen_interfaces__srv__COWriteID_Event__get_individual_type_description_source(NULL);
    sources[3] = *canopen_interfaces__srv__COWriteID_Request__get_individual_type_description_source(NULL);
    sources[4] = *canopen_interfaces__srv__COWriteID_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__COWriteID_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__COWriteID_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__COWriteID_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__COWriteID_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__COWriteID_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__COWriteID_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *canopen_interfaces__srv__COWriteID_Request__get_individual_type_description_source(NULL);
    sources[3] = *canopen_interfaces__srv__COWriteID_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
