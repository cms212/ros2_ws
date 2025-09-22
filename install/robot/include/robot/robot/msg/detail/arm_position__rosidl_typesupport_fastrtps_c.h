// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice
#ifndef ROBOT__MSG__DETAIL__ARM_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOT__MSG__DETAIL__ARM_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robot/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot/msg/detail/arm_position__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot
bool cdr_serialize_robot__msg__ArmPosition(
  const robot__msg__ArmPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot
bool cdr_deserialize_robot__msg__ArmPosition(
  eprosima::fastcdr::Cdr &,
  robot__msg__ArmPosition * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot
size_t get_serialized_size_robot__msg__ArmPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot
size_t max_serialized_size_robot__msg__ArmPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot
bool cdr_serialize_key_robot__msg__ArmPosition(
  const robot__msg__ArmPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot
size_t get_serialized_size_key_robot__msg__ArmPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot
size_t max_serialized_size_key_robot__msg__ArmPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot, msg, ArmPosition)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOT__MSG__DETAIL__ARM_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
