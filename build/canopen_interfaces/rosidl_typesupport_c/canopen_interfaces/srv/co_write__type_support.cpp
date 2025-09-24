// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from canopen_interfaces:srv/COWrite.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "canopen_interfaces/srv/detail/co_write__struct.h"
#include "canopen_interfaces/srv/detail/co_write__type_support.h"
#include "canopen_interfaces/srv/detail/co_write__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace canopen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _COWrite_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _COWrite_Request_type_support_ids_t;

static const _COWrite_Request_type_support_ids_t _COWrite_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _COWrite_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _COWrite_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _COWrite_Request_type_support_symbol_names_t _COWrite_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, canopen_interfaces, srv, COWrite_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWrite_Request)),
  }
};

typedef struct _COWrite_Request_type_support_data_t
{
  void * data[2];
} _COWrite_Request_type_support_data_t;

static _COWrite_Request_type_support_data_t _COWrite_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _COWrite_Request_message_typesupport_map = {
  2,
  "canopen_interfaces",
  &_COWrite_Request_message_typesupport_ids.typesupport_identifier[0],
  &_COWrite_Request_message_typesupport_symbol_names.symbol_name[0],
  &_COWrite_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t COWrite_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_COWrite_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &canopen_interfaces__srv__COWrite_Request__get_type_hash,
  &canopen_interfaces__srv__COWrite_Request__get_type_description,
  &canopen_interfaces__srv__COWrite_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace canopen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, canopen_interfaces, srv, COWrite_Request)() {
  return &::canopen_interfaces::srv::rosidl_typesupport_c::COWrite_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write__struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write__type_support.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace canopen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _COWrite_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _COWrite_Response_type_support_ids_t;

static const _COWrite_Response_type_support_ids_t _COWrite_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _COWrite_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _COWrite_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _COWrite_Response_type_support_symbol_names_t _COWrite_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, canopen_interfaces, srv, COWrite_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWrite_Response)),
  }
};

typedef struct _COWrite_Response_type_support_data_t
{
  void * data[2];
} _COWrite_Response_type_support_data_t;

static _COWrite_Response_type_support_data_t _COWrite_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _COWrite_Response_message_typesupport_map = {
  2,
  "canopen_interfaces",
  &_COWrite_Response_message_typesupport_ids.typesupport_identifier[0],
  &_COWrite_Response_message_typesupport_symbol_names.symbol_name[0],
  &_COWrite_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t COWrite_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_COWrite_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &canopen_interfaces__srv__COWrite_Response__get_type_hash,
  &canopen_interfaces__srv__COWrite_Response__get_type_description,
  &canopen_interfaces__srv__COWrite_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace canopen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, canopen_interfaces, srv, COWrite_Response)() {
  return &::canopen_interfaces::srv::rosidl_typesupport_c::COWrite_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write__struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write__type_support.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace canopen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _COWrite_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _COWrite_Event_type_support_ids_t;

static const _COWrite_Event_type_support_ids_t _COWrite_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _COWrite_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _COWrite_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _COWrite_Event_type_support_symbol_names_t _COWrite_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, canopen_interfaces, srv, COWrite_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWrite_Event)),
  }
};

typedef struct _COWrite_Event_type_support_data_t
{
  void * data[2];
} _COWrite_Event_type_support_data_t;

static _COWrite_Event_type_support_data_t _COWrite_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _COWrite_Event_message_typesupport_map = {
  2,
  "canopen_interfaces",
  &_COWrite_Event_message_typesupport_ids.typesupport_identifier[0],
  &_COWrite_Event_message_typesupport_symbol_names.symbol_name[0],
  &_COWrite_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t COWrite_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_COWrite_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &canopen_interfaces__srv__COWrite_Event__get_type_hash,
  &canopen_interfaces__srv__COWrite_Event__get_type_description,
  &canopen_interfaces__srv__COWrite_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace canopen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, canopen_interfaces, srv, COWrite_Event)() {
  return &::canopen_interfaces::srv::rosidl_typesupport_c::COWrite_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace canopen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _COWrite_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _COWrite_type_support_ids_t;

static const _COWrite_type_support_ids_t _COWrite_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _COWrite_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _COWrite_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _COWrite_type_support_symbol_names_t _COWrite_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, canopen_interfaces, srv, COWrite)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWrite)),
  }
};

typedef struct _COWrite_type_support_data_t
{
  void * data[2];
} _COWrite_type_support_data_t;

static _COWrite_type_support_data_t _COWrite_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _COWrite_service_typesupport_map = {
  2,
  "canopen_interfaces",
  &_COWrite_service_typesupport_ids.typesupport_identifier[0],
  &_COWrite_service_typesupport_symbol_names.symbol_name[0],
  &_COWrite_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t COWrite_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_COWrite_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &COWrite_Request_message_type_support_handle,
  &COWrite_Response_message_type_support_handle,
  &COWrite_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    canopen_interfaces,
    srv,
    COWrite
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    canopen_interfaces,
    srv,
    COWrite
  ),
  &canopen_interfaces__srv__COWrite__get_type_hash,
  &canopen_interfaces__srv__COWrite__get_type_description,
  &canopen_interfaces__srv__COWrite__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace canopen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, canopen_interfaces, srv, COWrite)() {
  return &::canopen_interfaces::srv::rosidl_typesupport_c::COWrite_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
