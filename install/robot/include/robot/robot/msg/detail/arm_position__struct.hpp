// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot/msg/arm_position.hpp"


#ifndef ROBOT__MSG__DETAIL__ARM_POSITION__STRUCT_HPP_
#define ROBOT__MSG__DETAIL__ARM_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot__msg__ArmPosition __attribute__((deprecated))
#else
# define DEPRECATED__robot__msg__ArmPosition __declspec(deprecated)
#endif

namespace robot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmPosition_
{
  using Type = ArmPosition_<ContainerAllocator>;

  explicit ArmPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_positions = 0;
    }
  }

  explicit ArmPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_positions = 0;
    }
  }

  // field types and members
  using _arm_positions_type =
    uint16_t;
  _arm_positions_type arm_positions;

  // setters for named parameter idiom
  Type & set__arm_positions(
    const uint16_t & _arg)
  {
    this->arm_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot::msg::ArmPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot::msg::ArmPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot::msg::ArmPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot::msg::ArmPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot::msg::ArmPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot::msg::ArmPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot::msg::ArmPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot::msg::ArmPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot::msg::ArmPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot::msg::ArmPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot__msg__ArmPosition
    std::shared_ptr<robot::msg::ArmPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot__msg__ArmPosition
    std::shared_ptr<robot::msg::ArmPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmPosition_ & other) const
  {
    if (this->arm_positions != other.arm_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmPosition_

// alias to use template instance with default allocator
using ArmPosition =
  robot::msg::ArmPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot

#endif  // ROBOT__MSG__DETAIL__ARM_POSITION__STRUCT_HPP_
