// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice

#include "robot/msg/detail/arm_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot
const rosidl_type_hash_t *
robot__msg__ArmPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xe7, 0x45, 0x27, 0xf0, 0xd2, 0x4f, 0xf9,
      0x2b, 0x9a, 0xdd, 0xaa, 0xad, 0xdf, 0x18, 0x4f,
      0x1b, 0x6c, 0xb6, 0x12, 0x8c, 0xb6, 0x03, 0xad,
      0x9d, 0xba, 0xbd, 0xb9, 0x39, 0xa6, 0xe9, 0x0f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot__msg__ArmPosition__TYPE_NAME[] = "robot/msg/ArmPosition";

// Define type names, field names, and default values
static char robot__msg__ArmPosition__FIELD_NAME__arm_positions[] = "arm_positions";

static rosidl_runtime_c__type_description__Field robot__msg__ArmPosition__FIELDS[] = {
  {
    {robot__msg__ArmPosition__FIELD_NAME__arm_positions, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot__msg__ArmPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot__msg__ArmPosition__TYPE_NAME, 21, 21},
      {robot__msg__ArmPosition__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 arm_positions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot__msg__ArmPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot__msg__ArmPosition__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 20, 20},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot__msg__ArmPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot__msg__ArmPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
