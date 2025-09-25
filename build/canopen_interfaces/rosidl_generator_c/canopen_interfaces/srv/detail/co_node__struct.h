// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from canopen_interfaces:srv/CONode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "canopen_interfaces/srv/co_node.h"


#ifndef CANOPEN_INTERFACES__SRV__DETAIL__CO_NODE__STRUCT_H_
#define CANOPEN_INTERFACES__SRV__DETAIL__CO_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CONode in the package canopen_interfaces.
typedef struct canopen_interfaces__srv__CONode_Request
{
  uint8_t nodeid;
} canopen_interfaces__srv__CONode_Request;

// Struct for a sequence of canopen_interfaces__srv__CONode_Request.
typedef struct canopen_interfaces__srv__CONode_Request__Sequence
{
  canopen_interfaces__srv__CONode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} canopen_interfaces__srv__CONode_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CONode in the package canopen_interfaces.
typedef struct canopen_interfaces__srv__CONode_Response
{
  bool success;
} canopen_interfaces__srv__CONode_Response;

// Struct for a sequence of canopen_interfaces__srv__CONode_Response.
typedef struct canopen_interfaces__srv__CONode_Response__Sequence
{
  canopen_interfaces__srv__CONode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} canopen_interfaces__srv__CONode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  canopen_interfaces__srv__CONode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  canopen_interfaces__srv__CONode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CONode in the package canopen_interfaces.
typedef struct canopen_interfaces__srv__CONode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  canopen_interfaces__srv__CONode_Request__Sequence request;
  canopen_interfaces__srv__CONode_Response__Sequence response;
} canopen_interfaces__srv__CONode_Event;

// Struct for a sequence of canopen_interfaces__srv__CONode_Event.
typedef struct canopen_interfaces__srv__CONode_Event__Sequence
{
  canopen_interfaces__srv__CONode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} canopen_interfaces__srv__CONode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANOPEN_INTERFACES__SRV__DETAIL__CO_NODE__STRUCT_H_
