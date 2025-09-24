// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from canopen_interfaces:srv/COHeartbeatID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "canopen_interfaces/srv/co_heartbeat_id.hpp"


#ifndef CANOPEN_INTERFACES__SRV__DETAIL__CO_HEARTBEAT_ID__TRAITS_HPP_
#define CANOPEN_INTERFACES__SRV__DETAIL__CO_HEARTBEAT_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "canopen_interfaces/srv/detail/co_heartbeat_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace canopen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const COHeartbeatID_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: nodeid
  {
    out << "nodeid: ";
    rosidl_generator_traits::value_to_yaml(msg.nodeid, out);
    out << ", ";
  }

  // member: heartbeat
  {
    out << "heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const COHeartbeatID_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nodeid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodeid: ";
    rosidl_generator_traits::value_to_yaml(msg.nodeid, out);
    out << "\n";
  }

  // member: heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const COHeartbeatID_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace canopen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use canopen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const canopen_interfaces::srv::COHeartbeatID_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  canopen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use canopen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const canopen_interfaces::srv::COHeartbeatID_Request & msg)
{
  return canopen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<canopen_interfaces::srv::COHeartbeatID_Request>()
{
  return "canopen_interfaces::srv::COHeartbeatID_Request";
}

template<>
inline const char * name<canopen_interfaces::srv::COHeartbeatID_Request>()
{
  return "canopen_interfaces/srv/COHeartbeatID_Request";
}

template<>
struct has_fixed_size<canopen_interfaces::srv::COHeartbeatID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<canopen_interfaces::srv::COHeartbeatID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<canopen_interfaces::srv::COHeartbeatID_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace canopen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const COHeartbeatID_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const COHeartbeatID_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const COHeartbeatID_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace canopen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use canopen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const canopen_interfaces::srv::COHeartbeatID_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  canopen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use canopen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const canopen_interfaces::srv::COHeartbeatID_Response & msg)
{
  return canopen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<canopen_interfaces::srv::COHeartbeatID_Response>()
{
  return "canopen_interfaces::srv::COHeartbeatID_Response";
}

template<>
inline const char * name<canopen_interfaces::srv::COHeartbeatID_Response>()
{
  return "canopen_interfaces/srv/COHeartbeatID_Response";
}

template<>
struct has_fixed_size<canopen_interfaces::srv::COHeartbeatID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<canopen_interfaces::srv::COHeartbeatID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<canopen_interfaces::srv::COHeartbeatID_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace canopen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const COHeartbeatID_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const COHeartbeatID_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const COHeartbeatID_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace canopen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use canopen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const canopen_interfaces::srv::COHeartbeatID_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  canopen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use canopen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const canopen_interfaces::srv::COHeartbeatID_Event & msg)
{
  return canopen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<canopen_interfaces::srv::COHeartbeatID_Event>()
{
  return "canopen_interfaces::srv::COHeartbeatID_Event";
}

template<>
inline const char * name<canopen_interfaces::srv::COHeartbeatID_Event>()
{
  return "canopen_interfaces/srv/COHeartbeatID_Event";
}

template<>
struct has_fixed_size<canopen_interfaces::srv::COHeartbeatID_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<canopen_interfaces::srv::COHeartbeatID_Event>
  : std::integral_constant<bool, has_bounded_size<canopen_interfaces::srv::COHeartbeatID_Request>::value && has_bounded_size<canopen_interfaces::srv::COHeartbeatID_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<canopen_interfaces::srv::COHeartbeatID_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<canopen_interfaces::srv::COHeartbeatID>()
{
  return "canopen_interfaces::srv::COHeartbeatID";
}

template<>
inline const char * name<canopen_interfaces::srv::COHeartbeatID>()
{
  return "canopen_interfaces/srv/COHeartbeatID";
}

template<>
struct has_fixed_size<canopen_interfaces::srv::COHeartbeatID>
  : std::integral_constant<
    bool,
    has_fixed_size<canopen_interfaces::srv::COHeartbeatID_Request>::value &&
    has_fixed_size<canopen_interfaces::srv::COHeartbeatID_Response>::value
  >
{
};

template<>
struct has_bounded_size<canopen_interfaces::srv::COHeartbeatID>
  : std::integral_constant<
    bool,
    has_bounded_size<canopen_interfaces::srv::COHeartbeatID_Request>::value &&
    has_bounded_size<canopen_interfaces::srv::COHeartbeatID_Response>::value
  >
{
};

template<>
struct is_service<canopen_interfaces::srv::COHeartbeatID>
  : std::true_type
{
};

template<>
struct is_service_request<canopen_interfaces::srv::COHeartbeatID_Request>
  : std::true_type
{
};

template<>
struct is_service_response<canopen_interfaces::srv::COHeartbeatID_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CANOPEN_INTERFACES__SRV__DETAIL__CO_HEARTBEAT_ID__TRAITS_HPP_
