// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot/msg/arm_position.h"


#ifndef ROBOT__MSG__DETAIL__ARM_POSITION__STRUCT_H_
#define ROBOT__MSG__DETAIL__ARM_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ArmPosition in the package robot.
typedef struct robot__msg__ArmPosition
{
  uint16_t arm_positions;
} robot__msg__ArmPosition;

// Struct for a sequence of robot__msg__ArmPosition.
typedef struct robot__msg__ArmPosition__Sequence
{
  robot__msg__ArmPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot__msg__ArmPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT__MSG__DETAIL__ARM_POSITION__STRUCT_H_
