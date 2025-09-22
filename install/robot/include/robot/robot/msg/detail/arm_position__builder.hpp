// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot/msg/arm_position.hpp"


#ifndef ROBOT__MSG__DETAIL__ARM_POSITION__BUILDER_HPP_
#define ROBOT__MSG__DETAIL__ARM_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot/msg/detail/arm_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot
{

namespace msg
{

namespace builder
{

class Init_ArmPosition_arm_positions
{
public:
  Init_ArmPosition_arm_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot::msg::ArmPosition arm_positions(::robot::msg::ArmPosition::_arm_positions_type arg)
  {
    msg_.arm_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot::msg::ArmPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot::msg::ArmPosition>()
{
  return robot::msg::builder::Init_ArmPosition_arm_positions();
}

}  // namespace robot

#endif  // ROBOT__MSG__DETAIL__ARM_POSITION__BUILDER_HPP_
