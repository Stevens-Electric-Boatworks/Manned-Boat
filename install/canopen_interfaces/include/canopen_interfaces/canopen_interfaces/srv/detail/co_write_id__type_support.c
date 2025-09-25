// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from canopen_interfaces:srv/COWriteID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "canopen_interfaces/srv/detail/co_write_id__rosidl_typesupport_introspection_c.h"
#include "canopen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "canopen_interfaces/srv/detail/co_write_id__functions.h"
#include "canopen_interfaces/srv/detail/co_write_id__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  canopen_interfaces__srv__COWriteID_Request__init(message_memory);
}

void canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_fini_function(void * message_memory)
{
  canopen_interfaces__srv__COWriteID_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_member_array[5] = {
  {
    "nodeid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Request, nodeid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Request, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subindex",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Request, subindex),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "canopen_datatype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Request, canopen_datatype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_members = {
  "canopen_interfaces__srv",  // message namespace
  "COWriteID_Request",  // message name
  5,  // number of fields
  sizeof(canopen_interfaces__srv__COWriteID_Request),
  false,  // has_any_key_member_
  canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_member_array,  // message members
  canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_type_support_handle = {
  0,
  &canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_members,
  get_message_typesupport_handle_function,
  &canopen_interfaces__srv__COWriteID_Request__get_type_hash,
  &canopen_interfaces__srv__COWriteID_Request__get_type_description,
  &canopen_interfaces__srv__COWriteID_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_canopen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Request)() {
  if (!canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_type_support_handle.typesupport_identifier) {
    canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "canopen_interfaces/srv/detail/co_write_id__rosidl_typesupport_introspection_c.h"
// already included above
// #include "canopen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write_id__functions.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write_id__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  canopen_interfaces__srv__COWriteID_Response__init(message_memory);
}

void canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_fini_function(void * message_memory)
{
  canopen_interfaces__srv__COWriteID_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_members = {
  "canopen_interfaces__srv",  // message namespace
  "COWriteID_Response",  // message name
  1,  // number of fields
  sizeof(canopen_interfaces__srv__COWriteID_Response),
  false,  // has_any_key_member_
  canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_member_array,  // message members
  canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_type_support_handle = {
  0,
  &canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_members,
  get_message_typesupport_handle_function,
  &canopen_interfaces__srv__COWriteID_Response__get_type_hash,
  &canopen_interfaces__srv__COWriteID_Response__get_type_description,
  &canopen_interfaces__srv__COWriteID_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_canopen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Response)() {
  if (!canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_type_support_handle.typesupport_identifier) {
    canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "canopen_interfaces/srv/detail/co_write_id__rosidl_typesupport_introspection_c.h"
// already included above
// #include "canopen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write_id__functions.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write_id__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "canopen_interfaces/srv/co_write_id.h"
// Member `request`
// Member `response`
// already included above
// #include "canopen_interfaces/srv/detail/co_write_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  canopen_interfaces__srv__COWriteID_Event__init(message_memory);
}

void canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_fini_function(void * message_memory)
{
  canopen_interfaces__srv__COWriteID_Event__fini(message_memory);
}

size_t canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__size_function__COWriteID_Event__request(
  const void * untyped_member)
{
  const canopen_interfaces__srv__COWriteID_Request__Sequence * member =
    (const canopen_interfaces__srv__COWriteID_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_const_function__COWriteID_Event__request(
  const void * untyped_member, size_t index)
{
  const canopen_interfaces__srv__COWriteID_Request__Sequence * member =
    (const canopen_interfaces__srv__COWriteID_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_function__COWriteID_Event__request(
  void * untyped_member, size_t index)
{
  canopen_interfaces__srv__COWriteID_Request__Sequence * member =
    (canopen_interfaces__srv__COWriteID_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__fetch_function__COWriteID_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const canopen_interfaces__srv__COWriteID_Request * item =
    ((const canopen_interfaces__srv__COWriteID_Request *)
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_const_function__COWriteID_Event__request(untyped_member, index));
  canopen_interfaces__srv__COWriteID_Request * value =
    (canopen_interfaces__srv__COWriteID_Request *)(untyped_value);
  *value = *item;
}

void canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__assign_function__COWriteID_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  canopen_interfaces__srv__COWriteID_Request * item =
    ((canopen_interfaces__srv__COWriteID_Request *)
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_function__COWriteID_Event__request(untyped_member, index));
  const canopen_interfaces__srv__COWriteID_Request * value =
    (const canopen_interfaces__srv__COWriteID_Request *)(untyped_value);
  *item = *value;
}

bool canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__resize_function__COWriteID_Event__request(
  void * untyped_member, size_t size)
{
  canopen_interfaces__srv__COWriteID_Request__Sequence * member =
    (canopen_interfaces__srv__COWriteID_Request__Sequence *)(untyped_member);
  canopen_interfaces__srv__COWriteID_Request__Sequence__fini(member);
  return canopen_interfaces__srv__COWriteID_Request__Sequence__init(member, size);
}

size_t canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__size_function__COWriteID_Event__response(
  const void * untyped_member)
{
  const canopen_interfaces__srv__COWriteID_Response__Sequence * member =
    (const canopen_interfaces__srv__COWriteID_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_const_function__COWriteID_Event__response(
  const void * untyped_member, size_t index)
{
  const canopen_interfaces__srv__COWriteID_Response__Sequence * member =
    (const canopen_interfaces__srv__COWriteID_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_function__COWriteID_Event__response(
  void * untyped_member, size_t index)
{
  canopen_interfaces__srv__COWriteID_Response__Sequence * member =
    (canopen_interfaces__srv__COWriteID_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__fetch_function__COWriteID_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const canopen_interfaces__srv__COWriteID_Response * item =
    ((const canopen_interfaces__srv__COWriteID_Response *)
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_const_function__COWriteID_Event__response(untyped_member, index));
  canopen_interfaces__srv__COWriteID_Response * value =
    (canopen_interfaces__srv__COWriteID_Response *)(untyped_value);
  *value = *item;
}

void canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__assign_function__COWriteID_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  canopen_interfaces__srv__COWriteID_Response * item =
    ((canopen_interfaces__srv__COWriteID_Response *)
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_function__COWriteID_Event__response(untyped_member, index));
  const canopen_interfaces__srv__COWriteID_Response * value =
    (const canopen_interfaces__srv__COWriteID_Response *)(untyped_value);
  *item = *value;
}

bool canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__resize_function__COWriteID_Event__response(
  void * untyped_member, size_t size)
{
  canopen_interfaces__srv__COWriteID_Response__Sequence * member =
    (canopen_interfaces__srv__COWriteID_Response__Sequence *)(untyped_member);
  canopen_interfaces__srv__COWriteID_Response__Sequence__fini(member);
  return canopen_interfaces__srv__COWriteID_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Event, request),  // bytes offset in struct
    NULL,  // default value
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__size_function__COWriteID_Event__request,  // size() function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_const_function__COWriteID_Event__request,  // get_const(index) function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_function__COWriteID_Event__request,  // get(index) function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__fetch_function__COWriteID_Event__request,  // fetch(index, &value) function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__assign_function__COWriteID_Event__request,  // assign(index, value) function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__resize_function__COWriteID_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(canopen_interfaces__srv__COWriteID_Event, response),  // bytes offset in struct
    NULL,  // default value
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__size_function__COWriteID_Event__response,  // size() function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_const_function__COWriteID_Event__response,  // get_const(index) function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__get_function__COWriteID_Event__response,  // get(index) function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__fetch_function__COWriteID_Event__response,  // fetch(index, &value) function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__assign_function__COWriteID_Event__response,  // assign(index, value) function pointer
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__resize_function__COWriteID_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_members = {
  "canopen_interfaces__srv",  // message namespace
  "COWriteID_Event",  // message name
  3,  // number of fields
  sizeof(canopen_interfaces__srv__COWriteID_Event),
  false,  // has_any_key_member_
  canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_member_array,  // message members
  canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_type_support_handle = {
  0,
  &canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_members,
  get_message_typesupport_handle_function,
  &canopen_interfaces__srv__COWriteID_Event__get_type_hash,
  &canopen_interfaces__srv__COWriteID_Event__get_type_description,
  &canopen_interfaces__srv__COWriteID_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_canopen_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Event)() {
  canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Request)();
  canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Response)();
  if (!canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_type_support_handle.typesupport_identifier) {
    canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "canopen_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "canopen_interfaces/srv/detail/co_write_id__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_service_members = {
  "canopen_interfaces__srv",  // service namespace
  "COWriteID",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_Request_message_type_support_handle,
  NULL,  // response message
  // canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_Response_message_type_support_handle
  NULL  // event_message
  // canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_Response_message_type_support_handle
};


static rosidl_service_type_support_t canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_service_type_support_handle = {
  0,
  &canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_service_members,
  get_service_typesupport_handle_function,
  &canopen_interfaces__srv__COWriteID_Request__rosidl_typesupport_introspection_c__COWriteID_Request_message_type_support_handle,
  &canopen_interfaces__srv__COWriteID_Response__rosidl_typesupport_introspection_c__COWriteID_Response_message_type_support_handle,
  &canopen_interfaces__srv__COWriteID_Event__rosidl_typesupport_introspection_c__COWriteID_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    canopen_interfaces,
    srv,
    COWriteID
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    canopen_interfaces,
    srv,
    COWriteID
  ),
  &canopen_interfaces__srv__COWriteID__get_type_hash,
  &canopen_interfaces__srv__COWriteID__get_type_description,
  &canopen_interfaces__srv__COWriteID__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_canopen_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID)(void) {
  if (!canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_service_type_support_handle.typesupport_identifier) {
    canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, canopen_interfaces, srv, COWriteID_Event)()->data;
  }

  return &canopen_interfaces__srv__detail__co_write_id__rosidl_typesupport_introspection_c__COWriteID_service_type_support_handle;
}
