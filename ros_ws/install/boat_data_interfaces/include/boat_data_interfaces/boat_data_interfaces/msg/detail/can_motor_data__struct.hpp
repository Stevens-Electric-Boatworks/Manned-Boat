// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from boat_data_interfaces:msg/CANMotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "boat_data_interfaces/msg/can_motor_data.hpp"


#ifndef BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__STRUCT_HPP_
#define BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__boat_data_interfaces__msg__CANMotorData __attribute__((deprecated))
#else
# define DEPRECATED__boat_data_interfaces__msg__CANMotorData __declspec(deprecated)
#endif

namespace boat_data_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CANMotorData_
{
  using Type = CANMotorData_<ContainerAllocator>;

  explicit CANMotorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0;
      this->throttle_mv = 0;
      this->throttle_percentage = 0;
      this->rpm = 0;
      this->torque = 0;
      this->motor_temp = 0;
      this->current = 0;
      this->power = 0;
    }
  }

  explicit CANMotorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0;
      this->throttle_mv = 0;
      this->throttle_percentage = 0;
      this->rpm = 0;
      this->torque = 0;
      this->motor_temp = 0;
      this->current = 0;
      this->power = 0;
    }
  }

  // field types and members
  using _voltage_type =
    uint8_t;
  _voltage_type voltage;
  using _throttle_mv_type =
    uint16_t;
  _throttle_mv_type throttle_mv;
  using _throttle_percentage_type =
    uint8_t;
  _throttle_percentage_type throttle_percentage;
  using _rpm_type =
    uint16_t;
  _rpm_type rpm;
  using _torque_type =
    int16_t;
  _torque_type torque;
  using _motor_temp_type =
    int8_t;
  _motor_temp_type motor_temp;
  using _current_type =
    uint8_t;
  _current_type current;
  using _power_type =
    int16_t;
  _power_type power;

  // setters for named parameter idiom
  Type & set__voltage(
    const uint8_t & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__throttle_mv(
    const uint16_t & _arg)
  {
    this->throttle_mv = _arg;
    return *this;
  }
  Type & set__throttle_percentage(
    const uint8_t & _arg)
  {
    this->throttle_percentage = _arg;
    return *this;
  }
  Type & set__rpm(
    const uint16_t & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__torque(
    const int16_t & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__motor_temp(
    const int8_t & _arg)
  {
    this->motor_temp = _arg;
    return *this;
  }
  Type & set__current(
    const uint8_t & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__power(
    const int16_t & _arg)
  {
    this->power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    boat_data_interfaces::msg::CANMotorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const boat_data_interfaces::msg::CANMotorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::CANMotorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<boat_data_interfaces::msg::CANMotorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::CANMotorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::CANMotorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      boat_data_interfaces::msg::CANMotorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<boat_data_interfaces::msg::CANMotorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::CANMotorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<boat_data_interfaces::msg::CANMotorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__boat_data_interfaces__msg__CANMotorData
    std::shared_ptr<boat_data_interfaces::msg::CANMotorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__boat_data_interfaces__msg__CANMotorData
    std::shared_ptr<boat_data_interfaces::msg::CANMotorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CANMotorData_ & other) const
  {
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->throttle_mv != other.throttle_mv) {
      return false;
    }
    if (this->throttle_percentage != other.throttle_percentage) {
      return false;
    }
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->motor_temp != other.motor_temp) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->power != other.power) {
      return false;
    }
    return true;
  }
  bool operator!=(const CANMotorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CANMotorData_

// alias to use template instance with default allocator
using CANMotorData =
  boat_data_interfaces::msg::CANMotorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace boat_data_interfaces

#endif  // BOAT_DATA_INTERFACES__MSG__DETAIL__CAN_MOTOR_DATA__STRUCT_HPP_
