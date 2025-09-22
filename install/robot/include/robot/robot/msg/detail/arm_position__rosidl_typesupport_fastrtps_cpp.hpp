// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT__MSG__DETAIL__ARM_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOT__MSG__DETAIL__ARM_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robot/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robot/msg/detail/arm_position__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robot
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot
cdr_serialize(
  const robot::msg::ArmPosition & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot::msg::ArmPosition & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot
get_serialized_size(
  const robot::msg::ArmPosition & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot
max_serialized_size_ArmPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot
cdr_serialize_key(
  const robot::msg::ArmPosition & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot
get_serialized_size_key(
  const robot::msg::ArmPosition & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot
max_serialized_size_key_ArmPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robot

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot, msg, ArmPosition)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOT__MSG__DETAIL__ARM_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
