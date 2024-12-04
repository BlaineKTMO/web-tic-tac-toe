// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tic_tac_toe_msgs:srv/Move.idl
// generated code does not contain a copyright notice
#include "tic_tac_toe_msgs/srv/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `board`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tic_tac_toe_msgs__srv__Move_Request__init(tic_tac_toe_msgs__srv__Move_Request * msg)
{
  if (!msg) {
    return false;
  }
  // board
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->board, 0)) {
    tic_tac_toe_msgs__srv__Move_Request__fini(msg);
    return false;
  }
  // player
  return true;
}

void
tic_tac_toe_msgs__srv__Move_Request__fini(tic_tac_toe_msgs__srv__Move_Request * msg)
{
  if (!msg) {
    return;
  }
  // board
  rosidl_runtime_c__uint8__Sequence__fini(&msg->board);
  // player
}

bool
tic_tac_toe_msgs__srv__Move_Request__are_equal(const tic_tac_toe_msgs__srv__Move_Request * lhs, const tic_tac_toe_msgs__srv__Move_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // board
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->board), &(rhs->board)))
  {
    return false;
  }
  // player
  if (lhs->player != rhs->player) {
    return false;
  }
  return true;
}

bool
tic_tac_toe_msgs__srv__Move_Request__copy(
  const tic_tac_toe_msgs__srv__Move_Request * input,
  tic_tac_toe_msgs__srv__Move_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // board
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->board), &(output->board)))
  {
    return false;
  }
  // player
  output->player = input->player;
  return true;
}

tic_tac_toe_msgs__srv__Move_Request *
tic_tac_toe_msgs__srv__Move_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tic_tac_toe_msgs__srv__Move_Request * msg = (tic_tac_toe_msgs__srv__Move_Request *)allocator.allocate(sizeof(tic_tac_toe_msgs__srv__Move_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tic_tac_toe_msgs__srv__Move_Request));
  bool success = tic_tac_toe_msgs__srv__Move_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tic_tac_toe_msgs__srv__Move_Request__destroy(tic_tac_toe_msgs__srv__Move_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tic_tac_toe_msgs__srv__Move_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tic_tac_toe_msgs__srv__Move_Request__Sequence__init(tic_tac_toe_msgs__srv__Move_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tic_tac_toe_msgs__srv__Move_Request * data = NULL;

  if (size) {
    data = (tic_tac_toe_msgs__srv__Move_Request *)allocator.zero_allocate(size, sizeof(tic_tac_toe_msgs__srv__Move_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tic_tac_toe_msgs__srv__Move_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tic_tac_toe_msgs__srv__Move_Request__fini(&data[i - 1]);
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
tic_tac_toe_msgs__srv__Move_Request__Sequence__fini(tic_tac_toe_msgs__srv__Move_Request__Sequence * array)
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
      tic_tac_toe_msgs__srv__Move_Request__fini(&array->data[i]);
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

tic_tac_toe_msgs__srv__Move_Request__Sequence *
tic_tac_toe_msgs__srv__Move_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tic_tac_toe_msgs__srv__Move_Request__Sequence * array = (tic_tac_toe_msgs__srv__Move_Request__Sequence *)allocator.allocate(sizeof(tic_tac_toe_msgs__srv__Move_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tic_tac_toe_msgs__srv__Move_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tic_tac_toe_msgs__srv__Move_Request__Sequence__destroy(tic_tac_toe_msgs__srv__Move_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tic_tac_toe_msgs__srv__Move_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tic_tac_toe_msgs__srv__Move_Request__Sequence__are_equal(const tic_tac_toe_msgs__srv__Move_Request__Sequence * lhs, const tic_tac_toe_msgs__srv__Move_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tic_tac_toe_msgs__srv__Move_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tic_tac_toe_msgs__srv__Move_Request__Sequence__copy(
  const tic_tac_toe_msgs__srv__Move_Request__Sequence * input,
  tic_tac_toe_msgs__srv__Move_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tic_tac_toe_msgs__srv__Move_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tic_tac_toe_msgs__srv__Move_Request * data =
      (tic_tac_toe_msgs__srv__Move_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tic_tac_toe_msgs__srv__Move_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tic_tac_toe_msgs__srv__Move_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tic_tac_toe_msgs__srv__Move_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tic_tac_toe_msgs__srv__Move_Response__init(tic_tac_toe_msgs__srv__Move_Response * msg)
{
  if (!msg) {
    return false;
  }
  // position
  return true;
}

void
tic_tac_toe_msgs__srv__Move_Response__fini(tic_tac_toe_msgs__srv__Move_Response * msg)
{
  if (!msg) {
    return;
  }
  // position
}

bool
tic_tac_toe_msgs__srv__Move_Response__are_equal(const tic_tac_toe_msgs__srv__Move_Response * lhs, const tic_tac_toe_msgs__srv__Move_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
tic_tac_toe_msgs__srv__Move_Response__copy(
  const tic_tac_toe_msgs__srv__Move_Response * input,
  tic_tac_toe_msgs__srv__Move_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  return true;
}

tic_tac_toe_msgs__srv__Move_Response *
tic_tac_toe_msgs__srv__Move_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tic_tac_toe_msgs__srv__Move_Response * msg = (tic_tac_toe_msgs__srv__Move_Response *)allocator.allocate(sizeof(tic_tac_toe_msgs__srv__Move_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tic_tac_toe_msgs__srv__Move_Response));
  bool success = tic_tac_toe_msgs__srv__Move_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tic_tac_toe_msgs__srv__Move_Response__destroy(tic_tac_toe_msgs__srv__Move_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tic_tac_toe_msgs__srv__Move_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tic_tac_toe_msgs__srv__Move_Response__Sequence__init(tic_tac_toe_msgs__srv__Move_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tic_tac_toe_msgs__srv__Move_Response * data = NULL;

  if (size) {
    data = (tic_tac_toe_msgs__srv__Move_Response *)allocator.zero_allocate(size, sizeof(tic_tac_toe_msgs__srv__Move_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tic_tac_toe_msgs__srv__Move_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tic_tac_toe_msgs__srv__Move_Response__fini(&data[i - 1]);
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
tic_tac_toe_msgs__srv__Move_Response__Sequence__fini(tic_tac_toe_msgs__srv__Move_Response__Sequence * array)
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
      tic_tac_toe_msgs__srv__Move_Response__fini(&array->data[i]);
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

tic_tac_toe_msgs__srv__Move_Response__Sequence *
tic_tac_toe_msgs__srv__Move_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tic_tac_toe_msgs__srv__Move_Response__Sequence * array = (tic_tac_toe_msgs__srv__Move_Response__Sequence *)allocator.allocate(sizeof(tic_tac_toe_msgs__srv__Move_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tic_tac_toe_msgs__srv__Move_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tic_tac_toe_msgs__srv__Move_Response__Sequence__destroy(tic_tac_toe_msgs__srv__Move_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tic_tac_toe_msgs__srv__Move_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tic_tac_toe_msgs__srv__Move_Response__Sequence__are_equal(const tic_tac_toe_msgs__srv__Move_Response__Sequence * lhs, const tic_tac_toe_msgs__srv__Move_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tic_tac_toe_msgs__srv__Move_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tic_tac_toe_msgs__srv__Move_Response__Sequence__copy(
  const tic_tac_toe_msgs__srv__Move_Response__Sequence * input,
  tic_tac_toe_msgs__srv__Move_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tic_tac_toe_msgs__srv__Move_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tic_tac_toe_msgs__srv__Move_Response * data =
      (tic_tac_toe_msgs__srv__Move_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tic_tac_toe_msgs__srv__Move_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tic_tac_toe_msgs__srv__Move_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tic_tac_toe_msgs__srv__Move_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
