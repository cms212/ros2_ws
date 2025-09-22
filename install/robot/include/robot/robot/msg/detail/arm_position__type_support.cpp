// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot/msg/detail/arm_position__functions.h"
#include "robot/msg/detail/arm_position__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot::msg::ArmPosition(_init);
}

void ArmPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot::msg::ArmPosition *>(message_memory);
  typed_message->~ArmPosition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmPosition_message_member_array[1] = {
  {
    "arm_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot::msg::ArmPosition, arm_positions),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmPosition_message_members = {
  "robot::msg",  // message namespace
  "ArmPosition",  // message name
  1,  // number of fields
  sizeof(robot::msg::ArmPosition),
  false,  // has_any_key_member_
  ArmPosition_message_member_array,  // message members
  ArmPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmPosition_message_members,
  get_message_typesupport_handle_function,
  &robot__msg__ArmPosition__get_type_hash,
  &robot__msg__ArmPosition__get_type_description,
  &robot__msg__ArmPosition__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot::msg::ArmPosition>()
{
  return &::robot::msg::rosidl_typesupport_introspection_cpp::ArmPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot, msg, ArmPosition)() {
  return &::robot::msg::rosidl_typesupport_introspection_cpp::ArmPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
