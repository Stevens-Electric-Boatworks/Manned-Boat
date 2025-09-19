// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boat_data_interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/motor_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boat_data_interfaces__msg__MotorData __attribute__((deprecated))
#else
# define DEPRECATED__boat_data_interfaces__msg__MotorData __declspec(deprecated)
#endif

namespace boat_data_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorData_
{
  using Type = MotorData_<ContainerAllocator>;

  explicit MotorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm_a = 0;
      this->rpm_b = 0;
      this->motor_synch = 0.0f;
      this->propulsion_angle = 0.0f;
    }
  }

  explicit MotorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpm_a = 0;
      this->rpm_b = 0;
      this->motor_synch = 0.0f;
      this->propulsion_angle = 0.0f;
    }
  }

  // field types and members
  using _rpm_a_type =
    uint8_t;
  _rpm_a_type rpm_a;
  using _rpm_b_type =
    uint8_t;
  _rpm_b_type rpm_b;
  using _motor_synch_type =
    float;
  _motor_synch_type motor_synch;
  using _propulsion_angle_type =
    float;
  _propulsion_angle_type propulsion_angle;

  // setters for named parameter idiom
  Type & set__rpm_a(
    const uint8_t & _arg)
  {
    this->rpm_a = _arg;
    return *this;
  }
  Type & set__rpm_b(
    const uint8_t & _arg)
  {
    this->rpm_b = _arg;
    return *this;
  }
  Type & set__motor_synch(
    const float & _arg)
  {
    this->motor_synch = _arg;
    return *this;
  }
  Type & set__propulsion_angle(
    const float & _arg)
  {
    this->propulsion_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boat_data_interfaces::msg::MotorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const boat_data_interfaces::msg::MotorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::MotorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::MotorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::MotorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::MotorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::MotorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::MotorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::MotorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::MotorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boat_data_interfaces__msg__MotorData
    std::shared_ptr<boat_data_interfaces::msg::MotorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boat_data_interfaces__msg__MotorData
    std::shared_ptr<boat_data_interfaces::msg::MotorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorData_ & other) const
  {
    if (this->rpm_a != other.rpm_a) {
      return false;
    }
    if (this->rpm_b != other.rpm_b) {
      return false;
    }
    if (this->motor_synch != other.motor_synch) {
      return false;
    }
    if (this->propulsion_angle != other.propulsion_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorData_

// alias to use template instance with default allocator
using MotorData =
  boat_data_interfaces::msg::MotorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_
