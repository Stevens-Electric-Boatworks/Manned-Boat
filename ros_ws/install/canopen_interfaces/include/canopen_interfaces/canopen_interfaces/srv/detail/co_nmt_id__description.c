// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from canopen_interfaces:srv/CONmtID.idl
// generated code does not contain a copyright notice

#include "canopen_interfaces/srv/detail/co_nmt_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__CONmtID__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x5a, 0x73, 0x14, 0x23, 0x84, 0x0e, 0x66,
      0x03, 0x25, 0x93, 0x25, 0x58, 0x32, 0x6e, 0x1d,
      0x51, 0x47, 0xf2, 0x74, 0x97, 0xa1, 0xe6, 0x79,
      0x1c, 0xd4, 0x65, 0xcf, 0xe9, 0x85, 0x01, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__CONmtID_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x4b, 0xf2, 0x0f, 0x33, 0x3b, 0x7b, 0x94,
      0x04, 0xc1, 0x98, 0x39, 0x5c, 0xee, 0x34, 0x81,
      0xab, 0xcd, 0x82, 0x29, 0x1c, 0xf3, 0xfd, 0x1b,
      0xd5, 0xa4, 0x13, 0xca, 0xd0, 0xf4, 0x64, 0x6f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__CONmtID_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xad, 0x0b, 0xe4, 0x8a, 0x3d, 0xc8, 0xb2, 0x63,
      0x79, 0x29, 0x7d, 0x69, 0x4e, 0x4c, 0xf8, 0xec,
      0xef, 0x66, 0xf8, 0x6b, 0x23, 0x93, 0xa6, 0xf8,
      0x65, 0xce, 0xa1, 0x4b, 0x9d, 0x3c, 0x0d, 0x41,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_canopen_interfaces
const rosidl_type_hash_t *
canopen_interfaces__srv__CONmtID_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x12, 0x98, 0x9c, 0x71, 0x1a, 0x00, 0x3f,
      0xd7, 0x84, 0xd3, 0x8e, 0xa3, 0x00, 0x43, 0x79,
      0x8c, 0xb4, 0xbf, 0x3c, 0xdb, 0xad, 0xce, 0x6b,
      0x11, 0xfb, 0x9d, 0x97, 0xd4, 0xab, 0x0a, 0x29,
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

static char canopen_interfaces__srv__CONmtID__TYPE_NAME[] = "canopen_interfaces/srv/CONmtID";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char canopen_interfaces__srv__CONmtID_Event__TYPE_NAME[] = "canopen_interfaces/srv/CONmtID_Event";
static char canopen_interfaces__srv__CONmtID_Request__TYPE_NAME[] = "canopen_interfaces/srv/CONmtID_Request";
static char canopen_interfaces__srv__CONmtID_Response__TYPE_NAME[] = "canopen_interfaces/srv/CONmtID_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char canopen_interfaces__srv__CONmtID__FIELD_NAME__request_message[] = "request_message";
static char canopen_interfaces__srv__CONmtID__FIELD_NAME__response_message[] = "response_message";
static char canopen_interfaces__srv__CONmtID__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__CONmtID__FIELDS[] = {
  {
    {canopen_interfaces__srv__CONmtID__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__CONmtID_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__CONmtID_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {canopen_interfaces__srv__CONmtID_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription canopen_interfaces__srv__CONmtID__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
canopen_interfaces__srv__CONmtID__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__CONmtID__TYPE_NAME, 30, 30},
      {canopen_interfaces__srv__CONmtID__FIELDS, 3, 3},
    },
    {canopen_interfaces__srv__CONmtID__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = canopen_interfaces__srv__CONmtID_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = canopen_interfaces__srv__CONmtID_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = canopen_interfaces__srv__CONmtID_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__CONmtID_Request__FIELD_NAME__nmtcommand[] = "nmtcommand";
static char canopen_interfaces__srv__CONmtID_Request__FIELD_NAME__nodeid[] = "nodeid";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__CONmtID_Request__FIELDS[] = {
  {
    {canopen_interfaces__srv__CONmtID_Request__FIELD_NAME__nmtcommand, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID_Request__FIELD_NAME__nodeid, 6, 6},
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
canopen_interfaces__srv__CONmtID_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__CONmtID_Request__TYPE_NAME, 38, 38},
      {canopen_interfaces__srv__CONmtID_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__CONmtID_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__CONmtID_Response__FIELDS[] = {
  {
    {canopen_interfaces__srv__CONmtID_Response__FIELD_NAME__success, 7, 7},
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
canopen_interfaces__srv__CONmtID_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__CONmtID_Response__TYPE_NAME, 39, 39},
      {canopen_interfaces__srv__CONmtID_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char canopen_interfaces__srv__CONmtID_Event__FIELD_NAME__info[] = "info";
static char canopen_interfaces__srv__CONmtID_Event__FIELD_NAME__request[] = "request";
static char canopen_interfaces__srv__CONmtID_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field canopen_interfaces__srv__CONmtID_Event__FIELDS[] = {
  {
    {canopen_interfaces__srv__CONmtID_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {canopen_interfaces__srv__CONmtID_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {canopen_interfaces__srv__CONmtID_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription canopen_interfaces__srv__CONmtID_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {canopen_interfaces__srv__CONmtID_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
canopen_interfaces__srv__CONmtID_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {canopen_interfaces__srv__CONmtID_Event__TYPE_NAME, 36, 36},
      {canopen_interfaces__srv__CONmtID_Event__FIELDS, 3, 3},
    },
    {canopen_interfaces__srv__CONmtID_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = canopen_interfaces__srv__CONmtID_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = canopen_interfaces__srv__CONmtID_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 nmtcommand\n"
  "uint8 nodeid\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__CONmtID__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__CONmtID__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__CONmtID_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__CONmtID_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__CONmtID_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__CONmtID_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
canopen_interfaces__srv__CONmtID_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {canopen_interfaces__srv__CONmtID_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__CONmtID__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__CONmtID__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *canopen_interfaces__srv__CONmtID_Event__get_individual_type_description_source(NULL);
    sources[3] = *canopen_interfaces__srv__CONmtID_Request__get_individual_type_description_source(NULL);
    sources[4] = *canopen_interfaces__srv__CONmtID_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__CONmtID_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__CONmtID_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__CONmtID_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__CONmtID_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
canopen_interfaces__srv__CONmtID_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *canopen_interfaces__srv__CONmtID_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *canopen_interfaces__srv__CONmtID_Request__get_individual_type_description_source(NULL);
    sources[3] = *canopen_interfaces__srv__CONmtID_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
