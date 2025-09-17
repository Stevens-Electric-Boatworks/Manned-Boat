// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from canopen_interfaces:srv/COHeartbeatID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "canopen_interfaces/srv/co_heartbeat_id.hpp"


#ifndef CANOPEN_INTERFACES__SRV__DETAIL__CO_HEARTBEAT_ID__BUILDER_HPP_
#define CANOPEN_INTERFACES__SRV__DETAIL__CO_HEARTBEAT_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "canopen_interfaces/srv/detail/co_heartbeat_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace canopen_interfaces
{

namespace srv
{

namespace builder
{

class Init_COHeartbeatID_Request_heartbeat
{
public:
  explicit Init_COHeartbeatID_Request_heartbeat(::canopen_interfaces::srv::COHeartbeatID_Request & msg)
  : msg_(msg)
  {}
  ::canopen_interfaces::srv::COHeartbeatID_Request heartbeat(::canopen_interfaces::srv::COHeartbeatID_Request::_heartbeat_type arg)
  {
    msg_.heartbeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::canopen_interfaces::srv::COHeartbeatID_Request msg_;
};

class Init_COHeartbeatID_Request_nodeid
{
public:
  Init_COHeartbeatID_Request_nodeid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_COHeartbeatID_Request_heartbeat nodeid(::canopen_interfaces::srv::COHeartbeatID_Request::_nodeid_type arg)
  {
    msg_.nodeid = std::move(arg);
    return Init_COHeartbeatID_Request_heartbeat(msg_);
  }

private:
  ::canopen_interfaces::srv::COHeartbeatID_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::canopen_interfaces::srv::COHeartbeatID_Request>()
{
  return canopen_interfaces::srv::builder::Init_COHeartbeatID_Request_nodeid();
}

}  // namespace canopen_interfaces


namespace canopen_interfaces
{

namespace srv
{

namespace builder
{

class Init_COHeartbeatID_Response_success
{
public:
  Init_COHeartbeatID_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::canopen_interfaces::srv::COHeartbeatID_Response success(::canopen_interfaces::srv::COHeartbeatID_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::canopen_interfaces::srv::COHeartbeatID_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::canopen_interfaces::srv::COHeartbeatID_Response>()
{
  return canopen_interfaces::srv::builder::Init_COHeartbeatID_Response_success();
}

}  // namespace canopen_interfaces


namespace canopen_interfaces
{

namespace srv
{

namespace builder
{

class Init_COHeartbeatID_Event_response
{
public:
  explicit Init_COHeartbeatID_Event_response(::canopen_interfaces::srv::COHeartbeatID_Event & msg)
  : msg_(msg)
  {}
  ::canopen_interfaces::srv::COHeartbeatID_Event response(::canopen_interfaces::srv::COHeartbeatID_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::canopen_interfaces::srv::COHeartbeatID_Event msg_;
};

class Init_COHeartbeatID_Event_request
{
public:
  explicit Init_COHeartbeatID_Event_request(::canopen_interfaces::srv::COHeartbeatID_Event & msg)
  : msg_(msg)
  {}
  Init_COHeartbeatID_Event_response request(::canopen_interfaces::srv::COHeartbeatID_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_COHeartbeatID_Event_response(msg_);
  }

private:
  ::canopen_interfaces::srv::COHeartbeatID_Event msg_;
};

class Init_COHeartbeatID_Event_info
{
public:
  Init_COHeartbeatID_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_COHeartbeatID_Event_request info(::canopen_interfaces::srv::COHeartbeatID_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_COHeartbeatID_Event_request(msg_);
  }

private:
  ::canopen_interfaces::srv::COHeartbeatID_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::canopen_interfaces::srv::COHeartbeatID_Event>()
{
  return canopen_interfaces::srv::builder::Init_COHeartbeatID_Event_info();
}

}  // namespace canopen_interfaces

#endif  // CANOPEN_INTERFACES__SRV__DETAIL__CO_HEARTBEAT_ID__BUILDER_HPP_
