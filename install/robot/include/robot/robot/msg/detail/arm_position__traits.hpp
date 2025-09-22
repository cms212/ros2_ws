// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot/msg/arm_position.hpp"


#ifndef ROBOT__MSG__DETAIL__ARM_POSITION__TRAITS_HPP_
#define ROBOT__MSG__DETAIL__ARM_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot/msg/detail/arm_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_positions
  {
    out << "arm_positions: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_positions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_positions: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_positions, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot

namespace rosidl_generator_traits
{

[[deprecated("use robot::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot::msg::ArmPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot::msg::ArmPosition & msg)
{
  return robot::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot::msg::ArmPosition>()
{
  return "robot::msg::ArmPosition";
}

template<>
inline const char * name<robot::msg::ArmPosition>()
{
  return "robot/msg/ArmPosition";
}

template<>
struct has_fixed_size<robot::msg::ArmPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot::msg::ArmPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot::msg::ArmPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT__MSG__DETAIL__ARM_POSITION__TRAITS_HPP_
