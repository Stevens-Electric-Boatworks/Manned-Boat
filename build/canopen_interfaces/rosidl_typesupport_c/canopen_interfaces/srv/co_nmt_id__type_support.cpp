// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from canopen_interfaces:srv/CONmtID.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "canopen_interfaces/srv/detail/co_nmt_id__struct.h"
#include "canopen_interfaces/srv/detail/co_nmt_id__type_support.h"
#include "canopen_interfaces/srv/detail/co_nmt_id__functions.h"
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

typedef struct _CONmtID_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CONmtID_Request_type_support_ids_t;

static const _CONmtID_Request_type_support_ids_t _CONmtID_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CONmtID_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CONmtID_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CONmtID_Request_type_support_symbol_names_t _CONmtID_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, canopen_interfaces, srv, CONmtID_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, CONmtID_Request)),
  }
};

typedef struct _CONmtID_Request_type_support_data_t
{
  void * data[2];
} _CONmtID_Request_type_support_data_t;

static _CONmtID_Request_type_support_data_t _CONmtID_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CONmtID_Request_message_typesupport_map = {
  2,
  "canopen_interfaces",
  &_CONmtID_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CONmtID_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CONmtID_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CONmtID_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CONmtID_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &canopen_interfaces__srv__CONmtID_Request__get_type_hash,
  &canopen_interfaces__srv__CONmtID_Request__get_type_description,
  &canopen_interfaces__srv__CONmtID_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace canopen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, canopen_interfaces, srv, CONmtID_Request)() {
  return &::canopen_interfaces::srv::rosidl_typesupport_c::CONmtID_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_nmt_id__struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_nmt_id__type_support.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_nmt_id__functions.h"
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

typedef struct _CONmtID_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CONmtID_Response_type_support_ids_t;

static const _CONmtID_Response_type_support_ids_t _CONmtID_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CONmtID_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CONmtID_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CONmtID_Response_type_support_symbol_names_t _CONmtID_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, canopen_interfaces, srv, CONmtID_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, CONmtID_Response)),
  }
};

typedef struct _CONmtID_Response_type_support_data_t
{
  void * data[2];
} _CONmtID_Response_type_support_data_t;

static _CONmtID_Response_type_support_data_t _CONmtID_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CONmtID_Response_message_typesupport_map = {
  2,
  "canopen_interfaces",
  &_CONmtID_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CONmtID_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CONmtID_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CONmtID_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CONmtID_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &canopen_interfaces__srv__CONmtID_Response__get_type_hash,
  &canopen_interfaces__srv__CONmtID_Response__get_type_description,
  &canopen_interfaces__srv__CONmtID_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace canopen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, canopen_interfaces, srv, CONmtID_Response)() {
  return &::canopen_interfaces::srv::rosidl_typesupport_c::CONmtID_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_nmt_id__struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_nmt_id__type_support.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_nmt_id__functions.h"
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

typedef struct _CONmtID_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CONmtID_Event_type_support_ids_t;

static const _CONmtID_Event_type_support_ids_t _CONmtID_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CONmtID_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CONmtID_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CONmtID_Event_type_support_symbol_names_t _CONmtID_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, canopen_interfaces, srv, CONmtID_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, CONmtID_Event)),
  }
};

typedef struct _CONmtID_Event_type_support_data_t
{
  void * data[2];
} _CONmtID_Event_type_support_data_t;

static _CONmtID_Event_type_support_data_t _CONmtID_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CONmtID_Event_message_typesupport_map = {
  2,
  "canopen_interfaces",
  &_CONmtID_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CONmtID_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CONmtID_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CONmtID_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CONmtID_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &canopen_interfaces__srv__CONmtID_Event__get_type_hash,
  &canopen_interfaces__srv__CONmtID_Event__get_type_description,
  &canopen_interfaces__srv__CONmtID_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace canopen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, canopen_interfaces, srv, CONmtID_Event)() {
  return &::canopen_interfaces::srv::rosidl_typesupport_c::CONmtID_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_nmt_id__type_support.h"
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
typedef struct _CONmtID_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CONmtID_type_support_ids_t;

static const _CONmtID_type_support_ids_t _CONmtID_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CONmtID_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CONmtID_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CONmtID_type_support_symbol_names_t _CONmtID_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, canopen_interfaces, srv, CONmtID)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, CONmtID)),
  }
};

typedef struct _CONmtID_type_support_data_t
{
  void * data[2];
} _CONmtID_type_support_data_t;

static _CONmtID_type_support_data_t _CONmtID_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CONmtID_service_typesupport_map = {
  2,
  "canopen_interfaces",
  &_CONmtID_service_typesupport_ids.typesupport_identifier[0],
  &_CONmtID_service_typesupport_symbol_names.symbol_name[0],
  &_CONmtID_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CONmtID_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CONmtID_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CONmtID_Request_message_type_support_handle,
  &CONmtID_Response_message_type_support_handle,
  &CONmtID_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    canopen_interfaces,
    srv,
    CONmtID
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    canopen_interfaces,
    srv,
    CONmtID
  ),
  &canopen_interfaces__srv__CONmtID__get_type_hash,
  &canopen_interfaces__srv__CONmtID__get_type_description,
  &canopen_interfaces__srv__CONmtID__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace canopen_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, canopen_interfaces, srv, CONmtID)() {
  return &::canopen_interfaces::srv::rosidl_typesupport_c::CONmtID_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
