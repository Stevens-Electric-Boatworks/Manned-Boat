// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from canopen_interfaces:srv/COReadID.idl
// generated code does not contain a copyright notice

#include "canopen_interfaces/srv/detail/co_read_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__COReadID__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0x93, 0x7c, 0x1e, 0xb9, 0xde, 0x63, 0x18,
      0x80, 0xe0, 0x4f, 0xc4, 0x13, 0x3e, 0x97, 0x78,
      0xe0, 0xf1, 0xe2, 0x02, 0xe1, 0x5b, 0xc3, 0xd2,
      0x83, 0x97, 0x46, 0x3a, 0x4e, 0x9d, 0xe4, 0x76,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__COReadID_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x5c, 0xf3, 0x02, 0xa7, 0xa8, 0x46, 0x7a,
      0x74, 0x2b, 0x18, 0x5e, 0x02, 0x94, 0x14, 0x4f,
      0x89, 0xac, 0x07, 0xc7, 0xd6, 0xe8, 0x45, 0xbc,
      0x13, 0x1c, 0x78, 0x46, 0x3a, 0xca, 0xfe, 0xc2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__COReadID_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x08, 0x0a, 0xa1, 0xe9, 0xab, 0xee, 0x47,
      0xb9, 0xa2, 0xb0, 0x39, 0x27, 0x3f, 0xc8, 0xca,
      0x66, 0xf6, 0xad, 0xa3, 0x32, 0x58, 0xc2, 0xde,
      0x8c, 0x5e, 0xa9, 0x2f, 0xb3, 0x96, 0x29, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__COReadID_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x85, 0xd7, 0x2e, 0xc2, 0x75, 0xd3, 0x5a,
      0x6f, 0xa0, 0xa2, 0x5f, 0x52, 0xd8, 0x66, 0xdb,
      0x3c, 0xa0, 0x04, 0x46, 0xcb, 0xd5, 0xf6, 0x7c,
      0x59, 0x64, 0x70, 0x22, 0x2b, 0x77, 0xbe, 0xe8,
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

static char canopen_interfaces__srv__COReadID__TYPE_NAME[] = "canopen_interfaces/srv/COReadID";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char canopen_interfaces__srv__COReadID_Event__TYPE_NAME[] = "canopen_interfaces/srv/COReadID_Event";
static char canopen_interfaces__srv__COReadID_Request__TYPE_NAME[] = "canopen_interfaces/srv/COReadID_Request";
static char canopen_interfaces__srv__COReadID_Response__TYPE_NAME[] = "canopen_interfaces/srv/COReadID_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char canopen_interfaces__srv__COReadID__FIELD_NAME__request_message[] = "request_message";
static char canopen_interfaces__srv__COReadID__FIELD_NAME__response_message[] = "response_message";
static char canopen_interfaces__srv__COReadID__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__COReadID__FIELDS[] = {
  {
    {canopen_interfaces__srv__COReadID__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__COReadID_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__COReadID_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__COReadID_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription canopen_interfaces__srv__COReadID__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
canopen_interfaces__srv__COReadID__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__COReadID__TYPE_NAME, 31, 31},
      {canopen_interfaces__srv__COReadID__FIELDS, 3, 3},
    },
    {canopen_interfaces__srv__COReadID__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = canopen_interfaces__srv__COReadID_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = canopen_interfaces__srv__COReadID_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = canopen_interfaces__srv__COReadID_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__COReadID_Request__FIELD_NAME__nodeid[] = "nodeid";
static char canopen_interfaces__srv__COReadID_Request__FIELD_NAME__index[] = "index";
static char canopen_interfaces__srv__COReadID_Request__FIELD_NAME__subindex[] = "subindex";
static char canopen_interfaces__srv__COReadID_Request__FIELD_NAME__canopen_datatype[] = "canopen_datatype";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__COReadID_Request__FIELDS[] = {
  {
    {canopen_interfaces__srv__COReadID_Request__FIELD_NAME__nodeid, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Request__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Request__FIELD_NAME__subindex, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Request__FIELD_NAME__canopen_datatype, 16, 16},
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
canopen_interfaces__srv__COReadID_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__COReadID_Request__TYPE_NAME, 39, 39},
      {canopen_interfaces__srv__COReadID_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__COReadID_Response__FIELD_NAME__success[] = "success";
static char canopen_interfaces__srv__COReadID_Response__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__COReadID_Response__FIELDS[] = {
  {
    {canopen_interfaces__srv__COReadID_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Response__FIELD_NAME__data, 4, 4},
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
canopen_interfaces__srv__COReadID_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__COReadID_Response__TYPE_NAME, 40, 40},
      {canopen_interfaces__srv__COReadID_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__COReadID_Event__FIELD_NAME__info[] = "info";
static char canopen_interfaces__srv__COReadID_Event__FIELD_NAME__request[] = "request";
static char canopen_interfaces__srv__COReadID_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__COReadID_Event__FIELDS[] = {
  {
    {canopen_interfaces__srv__COReadID_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {canopen_interfaces__srv__COReadID_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {canopen_interfaces__srv__COReadID_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription canopen_interfaces__srv__COReadID_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__COReadID_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
canopen_interfaces__srv__COReadID_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__COReadID_Event__TYPE_NAME, 37, 37},
      {canopen_interfaces__srv__COReadID_Event__FIELDS, 3, 3},
    },
    {canopen_interfaces__srv__COReadID_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = canopen_interfaces__srv__COReadID_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = canopen_interfaces__srv__COReadID_Response__get_type_description(NULL)->type_description.fields;
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
  "uint8 nodeid\n"
  "uint16 index\n"
  "uint8 subindex\n"
  "# 8 = uint8_t, 16 = uint16_t, 32 = uint32_t\n"
  "uint8 canopen_datatype\n"
  "---\n"
  "bool success\n"
  "uint32 data";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__COReadID__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__COReadID__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 355, 355},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__COReadID_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__COReadID_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__COReadID_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__COReadID_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__COReadID_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__COReadID_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__COReadID__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__COReadID__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *canopen_interfaces__srv__COReadID_Event__get_individual_type_description_source(NULL);
    sources[3] = *canopen_interfaces__srv__COReadID_Request__get_individual_type_description_source(NULL);
    sources[4] = *canopen_interfaces__srv__COReadID_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__COReadID_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__COReadID_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__COReadID_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__COReadID_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__COReadID_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__COReadID_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *canopen_interfaces__srv__COReadID_Request__get_individual_type_description_source(NULL);
    sources[3] = *canopen_interfaces__srv__COReadID_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
