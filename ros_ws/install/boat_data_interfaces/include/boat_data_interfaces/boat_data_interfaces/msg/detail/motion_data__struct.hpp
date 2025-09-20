// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boat_data_interfaces:msg/MotionData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/motion_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__STRUCT_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boat_data_interfaces__msg__MotionData __attribute__((deprecated))
#else
# define DEPRECATED__boat_data_interfaces__msg__MotionData __declspec(deprecated)
#endif

namespace boat_data_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionData_
{
  using Type = MotionData_<ContainerAllocator>;

  explicit MotionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0;
      this->speed = 0;
      this->gps_lat = 0.0f;
      this->gps_long = 0.0f;
      this->gps_alt = 0.0f;
      this->imu_x = 0.0f;
      this->imu_y = 0.0f;
      this->imu_z = 0.0f;
    }
  }

  explicit MotionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0;
      this->speed = 0;
      this->gps_lat = 0.0f;
      this->gps_long = 0.0f;
      this->gps_alt = 0.0f;
      this->imu_x = 0.0f;
      this->imu_y = 0.0f;
      this->imu_z = 0.0f;
    }
  }

  // field types and members
  using _heading_type =
    int8_t;
  _heading_type heading;
  using _speed_type =
    uint8_t;
  _speed_type speed;
  using _gps_lat_type =
    float;
  _gps_lat_type gps_lat;
  using _gps_long_type =
    float;
  _gps_long_type gps_long;
  using _gps_alt_type =
    float;
  _gps_alt_type gps_alt;
  using _imu_x_type =
    float;
  _imu_x_type imu_x;
  using _imu_y_type =
    float;
  _imu_y_type imu_y;
  using _imu_z_type =
    float;
  _imu_z_type imu_z;

  // setters for named parameter idiom
  Type & set__heading(
    const int8_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const uint8_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__gps_lat(
    const float & _arg)
  {
    this->gps_lat = _arg;
    return *this;
  }
  Type & set__gps_long(
    const float & _arg)
  {
    this->gps_long = _arg;
    return *this;
  }
  Type & set__gps_alt(
    const float & _arg)
  {
    this->gps_alt = _arg;
    return *this;
  }
  Type & set__imu_x(
    const float & _arg)
  {
    this->imu_x = _arg;
    return *this;
  }
  Type & set__imu_y(
    const float & _arg)
  {
    this->imu_y = _arg;
    return *this;
  }
  Type & set__imu_z(
    const float & _arg)
  {
    this->imu_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boat_data_interfaces::msg::MotionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const boat_data_interfaces::msg::MotionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::MotionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::MotionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::MotionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::MotionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::MotionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::MotionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::MotionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::MotionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boat_data_interfaces__msg__MotionData
    std::shared_ptr<boat_data_interfaces::msg::MotionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boat_data_interfaces__msg__MotionData
    std::shared_ptr<boat_data_interfaces::msg::MotionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionData_ & other) const
  {
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->gps_lat != other.gps_lat) {
      return false;
    }
    if (this->gps_long != other.gps_long) {
      return false;
    }
    if (this->gps_alt != other.gps_alt) {
      return false;
    }
    if (this->imu_x != other.imu_x) {
      return false;
    }
    if (this->imu_y != other.imu_y) {
      return false;
    }
    if (this->imu_z != other.imu_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionData_

// alias to use template instance with default allocator
using MotionData =
  boat_data_interfaces::msg::MotionData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTION_DATA__STRUCT_HPP_
