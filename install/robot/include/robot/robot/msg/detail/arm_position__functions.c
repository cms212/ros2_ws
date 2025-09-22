// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot:msg/ArmPosition.idl
// generated code does not contain a copyright notice
#include "robot/msg/detail/arm_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robot__msg__ArmPosition__init(robot__msg__ArmPosition * msg)
{
  if (!msg) {
    return false;
  }
  // arm_positions
  return true;
}

void
robot__msg__ArmPosition__fini(robot__msg__ArmPosition * msg)
{
  if (!msg) {
    return;
  }
  // arm_positions
}

bool
robot__msg__ArmPosition__are_equal(const robot__msg__ArmPosition * lhs, const robot__msg__ArmPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm_positions
  if (lhs->arm_positions != rhs->arm_positions) {
    return false;
  }
  return true;
}

bool
robot__msg__ArmPosition__copy(
  const robot__msg__ArmPosition * input,
  robot__msg__ArmPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // arm_positions
  output->arm_positions = input->arm_positions;
  return true;
}

robot__msg__ArmPosition *
robot__msg__ArmPosition__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot__msg__ArmPosition * msg = (robot__msg__ArmPosition *)allocator.allocate(sizeof(robot__msg__ArmPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot__msg__ArmPosition));
  bool success = robot__msg__ArmPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot__msg__ArmPosition__destroy(robot__msg__ArmPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot__msg__ArmPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot__msg__ArmPosition__Sequence__init(robot__msg__ArmPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot__msg__ArmPosition * data = NULL;

  if (size) {
    data = (robot__msg__ArmPosition *)allocator.zero_allocate(size, sizeof(robot__msg__ArmPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot__msg__ArmPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot__msg__ArmPosition__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot__msg__ArmPosition__Sequence__fini(robot__msg__ArmPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot__msg__ArmPosition__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot__msg__ArmPosition__Sequence *
robot__msg__ArmPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot__msg__ArmPosition__Sequence * array = (robot__msg__ArmPosition__Sequence *)allocator.allocate(sizeof(robot__msg__ArmPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot__msg__ArmPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot__msg__ArmPosition__Sequence__destroy(robot__msg__ArmPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot__msg__ArmPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot__msg__ArmPosition__Sequence__are_equal(const robot__msg__ArmPosition__Sequence * lhs, const robot__msg__ArmPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot__msg__ArmPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot__msg__ArmPosition__Sequence__copy(
  const robot__msg__ArmPosition__Sequence * input,
  robot__msg__ArmPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot__msg__ArmPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot__msg__ArmPosition * data =
      (robot__msg__ArmPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot__msg__ArmPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot__msg__ArmPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot__msg__ArmPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
