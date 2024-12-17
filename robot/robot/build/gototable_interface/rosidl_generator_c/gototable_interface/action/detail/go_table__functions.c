// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gototable_interface:action/GoTable.idl
// generated code does not contain a copyright notice
#include "gototable_interface/action/detail/go_table__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gototable_interface__action__GoTable_Goal__init(gototable_interface__action__GoTable_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // targetx
  // targety
  return true;
}

void
gototable_interface__action__GoTable_Goal__fini(gototable_interface__action__GoTable_Goal * msg)
{
  if (!msg) {
    return;
  }
  // targetx
  // targety
}

bool
gototable_interface__action__GoTable_Goal__are_equal(const gototable_interface__action__GoTable_Goal * lhs, const gototable_interface__action__GoTable_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // targetx
  if (lhs->targetx != rhs->targetx) {
    return false;
  }
  // targety
  if (lhs->targety != rhs->targety) {
    return false;
  }
  return true;
}

bool
gototable_interface__action__GoTable_Goal__copy(
  const gototable_interface__action__GoTable_Goal * input,
  gototable_interface__action__GoTable_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // targetx
  output->targetx = input->targetx;
  // targety
  output->targety = input->targety;
  return true;
}

gototable_interface__action__GoTable_Goal *
gototable_interface__action__GoTable_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Goal * msg = (gototable_interface__action__GoTable_Goal *)allocator.allocate(sizeof(gototable_interface__action__GoTable_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gototable_interface__action__GoTable_Goal));
  bool success = gototable_interface__action__GoTable_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gototable_interface__action__GoTable_Goal__destroy(gototable_interface__action__GoTable_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gototable_interface__action__GoTable_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gototable_interface__action__GoTable_Goal__Sequence__init(gototable_interface__action__GoTable_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Goal * data = NULL;

  if (size) {
    data = (gototable_interface__action__GoTable_Goal *)allocator.zero_allocate(size, sizeof(gototable_interface__action__GoTable_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gototable_interface__action__GoTable_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gototable_interface__action__GoTable_Goal__fini(&data[i - 1]);
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
gototable_interface__action__GoTable_Goal__Sequence__fini(gototable_interface__action__GoTable_Goal__Sequence * array)
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
      gototable_interface__action__GoTable_Goal__fini(&array->data[i]);
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

gototable_interface__action__GoTable_Goal__Sequence *
gototable_interface__action__GoTable_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Goal__Sequence * array = (gototable_interface__action__GoTable_Goal__Sequence *)allocator.allocate(sizeof(gototable_interface__action__GoTable_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gototable_interface__action__GoTable_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gototable_interface__action__GoTable_Goal__Sequence__destroy(gototable_interface__action__GoTable_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gototable_interface__action__GoTable_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gototable_interface__action__GoTable_Goal__Sequence__are_equal(const gototable_interface__action__GoTable_Goal__Sequence * lhs, const gototable_interface__action__GoTable_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gototable_interface__action__GoTable_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gototable_interface__action__GoTable_Goal__Sequence__copy(
  const gototable_interface__action__GoTable_Goal__Sequence * input,
  gototable_interface__action__GoTable_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gototable_interface__action__GoTable_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gototable_interface__action__GoTable_Goal * data =
      (gototable_interface__action__GoTable_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gototable_interface__action__GoTable_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gototable_interface__action__GoTable_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gototable_interface__action__GoTable_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
gototable_interface__action__GoTable_Result__init(gototable_interface__action__GoTable_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
gototable_interface__action__GoTable_Result__fini(gototable_interface__action__GoTable_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
gototable_interface__action__GoTable_Result__are_equal(const gototable_interface__action__GoTable_Result * lhs, const gototable_interface__action__GoTable_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
gototable_interface__action__GoTable_Result__copy(
  const gototable_interface__action__GoTable_Result * input,
  gototable_interface__action__GoTable_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

gototable_interface__action__GoTable_Result *
gototable_interface__action__GoTable_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Result * msg = (gototable_interface__action__GoTable_Result *)allocator.allocate(sizeof(gototable_interface__action__GoTable_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gototable_interface__action__GoTable_Result));
  bool success = gototable_interface__action__GoTable_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gototable_interface__action__GoTable_Result__destroy(gototable_interface__action__GoTable_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gototable_interface__action__GoTable_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gototable_interface__action__GoTable_Result__Sequence__init(gototable_interface__action__GoTable_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Result * data = NULL;

  if (size) {
    data = (gototable_interface__action__GoTable_Result *)allocator.zero_allocate(size, sizeof(gototable_interface__action__GoTable_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gototable_interface__action__GoTable_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gototable_interface__action__GoTable_Result__fini(&data[i - 1]);
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
gototable_interface__action__GoTable_Result__Sequence__fini(gototable_interface__action__GoTable_Result__Sequence * array)
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
      gototable_interface__action__GoTable_Result__fini(&array->data[i]);
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

gototable_interface__action__GoTable_Result__Sequence *
gototable_interface__action__GoTable_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Result__Sequence * array = (gototable_interface__action__GoTable_Result__Sequence *)allocator.allocate(sizeof(gototable_interface__action__GoTable_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gototable_interface__action__GoTable_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gototable_interface__action__GoTable_Result__Sequence__destroy(gototable_interface__action__GoTable_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gototable_interface__action__GoTable_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gototable_interface__action__GoTable_Result__Sequence__are_equal(const gototable_interface__action__GoTable_Result__Sequence * lhs, const gototable_interface__action__GoTable_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gototable_interface__action__GoTable_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gototable_interface__action__GoTable_Result__Sequence__copy(
  const gototable_interface__action__GoTable_Result__Sequence * input,
  gototable_interface__action__GoTable_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gototable_interface__action__GoTable_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gototable_interface__action__GoTable_Result * data =
      (gototable_interface__action__GoTable_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gototable_interface__action__GoTable_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gototable_interface__action__GoTable_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gototable_interface__action__GoTable_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
gototable_interface__action__GoTable_Feedback__init(gototable_interface__action__GoTable_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // currx
  // curry
  return true;
}

void
gototable_interface__action__GoTable_Feedback__fini(gototable_interface__action__GoTable_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // currx
  // curry
}

bool
gototable_interface__action__GoTable_Feedback__are_equal(const gototable_interface__action__GoTable_Feedback * lhs, const gototable_interface__action__GoTable_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // currx
  if (lhs->currx != rhs->currx) {
    return false;
  }
  // curry
  if (lhs->curry != rhs->curry) {
    return false;
  }
  return true;
}

bool
gototable_interface__action__GoTable_Feedback__copy(
  const gototable_interface__action__GoTable_Feedback * input,
  gototable_interface__action__GoTable_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // currx
  output->currx = input->currx;
  // curry
  output->curry = input->curry;
  return true;
}

gototable_interface__action__GoTable_Feedback *
gototable_interface__action__GoTable_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Feedback * msg = (gototable_interface__action__GoTable_Feedback *)allocator.allocate(sizeof(gototable_interface__action__GoTable_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gototable_interface__action__GoTable_Feedback));
  bool success = gototable_interface__action__GoTable_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gototable_interface__action__GoTable_Feedback__destroy(gototable_interface__action__GoTable_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gototable_interface__action__GoTable_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gototable_interface__action__GoTable_Feedback__Sequence__init(gototable_interface__action__GoTable_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Feedback * data = NULL;

  if (size) {
    data = (gototable_interface__action__GoTable_Feedback *)allocator.zero_allocate(size, sizeof(gototable_interface__action__GoTable_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gototable_interface__action__GoTable_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gototable_interface__action__GoTable_Feedback__fini(&data[i - 1]);
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
gototable_interface__action__GoTable_Feedback__Sequence__fini(gototable_interface__action__GoTable_Feedback__Sequence * array)
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
      gototable_interface__action__GoTable_Feedback__fini(&array->data[i]);
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

gototable_interface__action__GoTable_Feedback__Sequence *
gototable_interface__action__GoTable_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_Feedback__Sequence * array = (gototable_interface__action__GoTable_Feedback__Sequence *)allocator.allocate(sizeof(gototable_interface__action__GoTable_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gototable_interface__action__GoTable_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gototable_interface__action__GoTable_Feedback__Sequence__destroy(gototable_interface__action__GoTable_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gototable_interface__action__GoTable_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gototable_interface__action__GoTable_Feedback__Sequence__are_equal(const gototable_interface__action__GoTable_Feedback__Sequence * lhs, const gototable_interface__action__GoTable_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gototable_interface__action__GoTable_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gototable_interface__action__GoTable_Feedback__Sequence__copy(
  const gototable_interface__action__GoTable_Feedback__Sequence * input,
  gototable_interface__action__GoTable_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gototable_interface__action__GoTable_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gototable_interface__action__GoTable_Feedback * data =
      (gototable_interface__action__GoTable_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gototable_interface__action__GoTable_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gototable_interface__action__GoTable_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gototable_interface__action__GoTable_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "gototable_interface/action/detail/go_table__functions.h"

bool
gototable_interface__action__GoTable_SendGoal_Request__init(gototable_interface__action__GoTable_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    gototable_interface__action__GoTable_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!gototable_interface__action__GoTable_Goal__init(&msg->goal)) {
    gototable_interface__action__GoTable_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
gototable_interface__action__GoTable_SendGoal_Request__fini(gototable_interface__action__GoTable_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  gototable_interface__action__GoTable_Goal__fini(&msg->goal);
}

bool
gototable_interface__action__GoTable_SendGoal_Request__are_equal(const gototable_interface__action__GoTable_SendGoal_Request * lhs, const gototable_interface__action__GoTable_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!gototable_interface__action__GoTable_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
gototable_interface__action__GoTable_SendGoal_Request__copy(
  const gototable_interface__action__GoTable_SendGoal_Request * input,
  gototable_interface__action__GoTable_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!gototable_interface__action__GoTable_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

gototable_interface__action__GoTable_SendGoal_Request *
gototable_interface__action__GoTable_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_SendGoal_Request * msg = (gototable_interface__action__GoTable_SendGoal_Request *)allocator.allocate(sizeof(gototable_interface__action__GoTable_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gototable_interface__action__GoTable_SendGoal_Request));
  bool success = gototable_interface__action__GoTable_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gototable_interface__action__GoTable_SendGoal_Request__destroy(gototable_interface__action__GoTable_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gototable_interface__action__GoTable_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gototable_interface__action__GoTable_SendGoal_Request__Sequence__init(gototable_interface__action__GoTable_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_SendGoal_Request * data = NULL;

  if (size) {
    data = (gototable_interface__action__GoTable_SendGoal_Request *)allocator.zero_allocate(size, sizeof(gototable_interface__action__GoTable_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gototable_interface__action__GoTable_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gototable_interface__action__GoTable_SendGoal_Request__fini(&data[i - 1]);
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
gototable_interface__action__GoTable_SendGoal_Request__Sequence__fini(gototable_interface__action__GoTable_SendGoal_Request__Sequence * array)
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
      gototable_interface__action__GoTable_SendGoal_Request__fini(&array->data[i]);
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

gototable_interface__action__GoTable_SendGoal_Request__Sequence *
gototable_interface__action__GoTable_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_SendGoal_Request__Sequence * array = (gototable_interface__action__GoTable_SendGoal_Request__Sequence *)allocator.allocate(sizeof(gototable_interface__action__GoTable_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gototable_interface__action__GoTable_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gototable_interface__action__GoTable_SendGoal_Request__Sequence__destroy(gototable_interface__action__GoTable_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gototable_interface__action__GoTable_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gototable_interface__action__GoTable_SendGoal_Request__Sequence__are_equal(const gototable_interface__action__GoTable_SendGoal_Request__Sequence * lhs, const gototable_interface__action__GoTable_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gototable_interface__action__GoTable_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gototable_interface__action__GoTable_SendGoal_Request__Sequence__copy(
  const gototable_interface__action__GoTable_SendGoal_Request__Sequence * input,
  gototable_interface__action__GoTable_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gototable_interface__action__GoTable_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gototable_interface__action__GoTable_SendGoal_Request * data =
      (gototable_interface__action__GoTable_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gototable_interface__action__GoTable_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gototable_interface__action__GoTable_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gototable_interface__action__GoTable_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
gototable_interface__action__GoTable_SendGoal_Response__init(gototable_interface__action__GoTable_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    gototable_interface__action__GoTable_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
gototable_interface__action__GoTable_SendGoal_Response__fini(gototable_interface__action__GoTable_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
gototable_interface__action__GoTable_SendGoal_Response__are_equal(const gototable_interface__action__GoTable_SendGoal_Response * lhs, const gototable_interface__action__GoTable_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
gototable_interface__action__GoTable_SendGoal_Response__copy(
  const gototable_interface__action__GoTable_SendGoal_Response * input,
  gototable_interface__action__GoTable_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

gototable_interface__action__GoTable_SendGoal_Response *
gototable_interface__action__GoTable_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_SendGoal_Response * msg = (gototable_interface__action__GoTable_SendGoal_Response *)allocator.allocate(sizeof(gototable_interface__action__GoTable_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gototable_interface__action__GoTable_SendGoal_Response));
  bool success = gototable_interface__action__GoTable_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gototable_interface__action__GoTable_SendGoal_Response__destroy(gototable_interface__action__GoTable_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gototable_interface__action__GoTable_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gototable_interface__action__GoTable_SendGoal_Response__Sequence__init(gototable_interface__action__GoTable_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_SendGoal_Response * data = NULL;

  if (size) {
    data = (gototable_interface__action__GoTable_SendGoal_Response *)allocator.zero_allocate(size, sizeof(gototable_interface__action__GoTable_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gototable_interface__action__GoTable_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gototable_interface__action__GoTable_SendGoal_Response__fini(&data[i - 1]);
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
gototable_interface__action__GoTable_SendGoal_Response__Sequence__fini(gototable_interface__action__GoTable_SendGoal_Response__Sequence * array)
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
      gototable_interface__action__GoTable_SendGoal_Response__fini(&array->data[i]);
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

gototable_interface__action__GoTable_SendGoal_Response__Sequence *
gototable_interface__action__GoTable_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_SendGoal_Response__Sequence * array = (gototable_interface__action__GoTable_SendGoal_Response__Sequence *)allocator.allocate(sizeof(gototable_interface__action__GoTable_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gototable_interface__action__GoTable_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gototable_interface__action__GoTable_SendGoal_Response__Sequence__destroy(gototable_interface__action__GoTable_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gototable_interface__action__GoTable_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gototable_interface__action__GoTable_SendGoal_Response__Sequence__are_equal(const gototable_interface__action__GoTable_SendGoal_Response__Sequence * lhs, const gototable_interface__action__GoTable_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gototable_interface__action__GoTable_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gototable_interface__action__GoTable_SendGoal_Response__Sequence__copy(
  const gototable_interface__action__GoTable_SendGoal_Response__Sequence * input,
  gototable_interface__action__GoTable_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gototable_interface__action__GoTable_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gototable_interface__action__GoTable_SendGoal_Response * data =
      (gototable_interface__action__GoTable_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gototable_interface__action__GoTable_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gototable_interface__action__GoTable_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gototable_interface__action__GoTable_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
gototable_interface__action__GoTable_GetResult_Request__init(gototable_interface__action__GoTable_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    gototable_interface__action__GoTable_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
gototable_interface__action__GoTable_GetResult_Request__fini(gototable_interface__action__GoTable_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
gototable_interface__action__GoTable_GetResult_Request__are_equal(const gototable_interface__action__GoTable_GetResult_Request * lhs, const gototable_interface__action__GoTable_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
gototable_interface__action__GoTable_GetResult_Request__copy(
  const gototable_interface__action__GoTable_GetResult_Request * input,
  gototable_interface__action__GoTable_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

gototable_interface__action__GoTable_GetResult_Request *
gototable_interface__action__GoTable_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_GetResult_Request * msg = (gototable_interface__action__GoTable_GetResult_Request *)allocator.allocate(sizeof(gototable_interface__action__GoTable_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gototable_interface__action__GoTable_GetResult_Request));
  bool success = gototable_interface__action__GoTable_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gototable_interface__action__GoTable_GetResult_Request__destroy(gototable_interface__action__GoTable_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gototable_interface__action__GoTable_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gototable_interface__action__GoTable_GetResult_Request__Sequence__init(gototable_interface__action__GoTable_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_GetResult_Request * data = NULL;

  if (size) {
    data = (gototable_interface__action__GoTable_GetResult_Request *)allocator.zero_allocate(size, sizeof(gototable_interface__action__GoTable_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gototable_interface__action__GoTable_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gototable_interface__action__GoTable_GetResult_Request__fini(&data[i - 1]);
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
gototable_interface__action__GoTable_GetResult_Request__Sequence__fini(gototable_interface__action__GoTable_GetResult_Request__Sequence * array)
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
      gototable_interface__action__GoTable_GetResult_Request__fini(&array->data[i]);
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

gototable_interface__action__GoTable_GetResult_Request__Sequence *
gototable_interface__action__GoTable_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_GetResult_Request__Sequence * array = (gototable_interface__action__GoTable_GetResult_Request__Sequence *)allocator.allocate(sizeof(gototable_interface__action__GoTable_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gototable_interface__action__GoTable_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gototable_interface__action__GoTable_GetResult_Request__Sequence__destroy(gototable_interface__action__GoTable_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gototable_interface__action__GoTable_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gototable_interface__action__GoTable_GetResult_Request__Sequence__are_equal(const gototable_interface__action__GoTable_GetResult_Request__Sequence * lhs, const gototable_interface__action__GoTable_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gototable_interface__action__GoTable_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gototable_interface__action__GoTable_GetResult_Request__Sequence__copy(
  const gototable_interface__action__GoTable_GetResult_Request__Sequence * input,
  gototable_interface__action__GoTable_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gototable_interface__action__GoTable_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gototable_interface__action__GoTable_GetResult_Request * data =
      (gototable_interface__action__GoTable_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gototable_interface__action__GoTable_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gototable_interface__action__GoTable_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gototable_interface__action__GoTable_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "gototable_interface/action/detail/go_table__functions.h"

bool
gototable_interface__action__GoTable_GetResult_Response__init(gototable_interface__action__GoTable_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!gototable_interface__action__GoTable_Result__init(&msg->result)) {
    gototable_interface__action__GoTable_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
gototable_interface__action__GoTable_GetResult_Response__fini(gototable_interface__action__GoTable_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  gototable_interface__action__GoTable_Result__fini(&msg->result);
}

bool
gototable_interface__action__GoTable_GetResult_Response__are_equal(const gototable_interface__action__GoTable_GetResult_Response * lhs, const gototable_interface__action__GoTable_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!gototable_interface__action__GoTable_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
gototable_interface__action__GoTable_GetResult_Response__copy(
  const gototable_interface__action__GoTable_GetResult_Response * input,
  gototable_interface__action__GoTable_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!gototable_interface__action__GoTable_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

gototable_interface__action__GoTable_GetResult_Response *
gototable_interface__action__GoTable_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_GetResult_Response * msg = (gototable_interface__action__GoTable_GetResult_Response *)allocator.allocate(sizeof(gototable_interface__action__GoTable_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gototable_interface__action__GoTable_GetResult_Response));
  bool success = gototable_interface__action__GoTable_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gototable_interface__action__GoTable_GetResult_Response__destroy(gototable_interface__action__GoTable_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gototable_interface__action__GoTable_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gototable_interface__action__GoTable_GetResult_Response__Sequence__init(gototable_interface__action__GoTable_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_GetResult_Response * data = NULL;

  if (size) {
    data = (gototable_interface__action__GoTable_GetResult_Response *)allocator.zero_allocate(size, sizeof(gototable_interface__action__GoTable_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gototable_interface__action__GoTable_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gototable_interface__action__GoTable_GetResult_Response__fini(&data[i - 1]);
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
gototable_interface__action__GoTable_GetResult_Response__Sequence__fini(gototable_interface__action__GoTable_GetResult_Response__Sequence * array)
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
      gototable_interface__action__GoTable_GetResult_Response__fini(&array->data[i]);
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

gototable_interface__action__GoTable_GetResult_Response__Sequence *
gototable_interface__action__GoTable_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_GetResult_Response__Sequence * array = (gototable_interface__action__GoTable_GetResult_Response__Sequence *)allocator.allocate(sizeof(gototable_interface__action__GoTable_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gototable_interface__action__GoTable_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gototable_interface__action__GoTable_GetResult_Response__Sequence__destroy(gototable_interface__action__GoTable_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gototable_interface__action__GoTable_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gototable_interface__action__GoTable_GetResult_Response__Sequence__are_equal(const gototable_interface__action__GoTable_GetResult_Response__Sequence * lhs, const gototable_interface__action__GoTable_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gototable_interface__action__GoTable_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gototable_interface__action__GoTable_GetResult_Response__Sequence__copy(
  const gototable_interface__action__GoTable_GetResult_Response__Sequence * input,
  gototable_interface__action__GoTable_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gototable_interface__action__GoTable_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gototable_interface__action__GoTable_GetResult_Response * data =
      (gototable_interface__action__GoTable_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gototable_interface__action__GoTable_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gototable_interface__action__GoTable_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gototable_interface__action__GoTable_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "gototable_interface/action/detail/go_table__functions.h"

bool
gototable_interface__action__GoTable_FeedbackMessage__init(gototable_interface__action__GoTable_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    gototable_interface__action__GoTable_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!gototable_interface__action__GoTable_Feedback__init(&msg->feedback)) {
    gototable_interface__action__GoTable_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
gototable_interface__action__GoTable_FeedbackMessage__fini(gototable_interface__action__GoTable_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  gototable_interface__action__GoTable_Feedback__fini(&msg->feedback);
}

bool
gototable_interface__action__GoTable_FeedbackMessage__are_equal(const gototable_interface__action__GoTable_FeedbackMessage * lhs, const gototable_interface__action__GoTable_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!gototable_interface__action__GoTable_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
gototable_interface__action__GoTable_FeedbackMessage__copy(
  const gototable_interface__action__GoTable_FeedbackMessage * input,
  gototable_interface__action__GoTable_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!gototable_interface__action__GoTable_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

gototable_interface__action__GoTable_FeedbackMessage *
gototable_interface__action__GoTable_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_FeedbackMessage * msg = (gototable_interface__action__GoTable_FeedbackMessage *)allocator.allocate(sizeof(gototable_interface__action__GoTable_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gototable_interface__action__GoTable_FeedbackMessage));
  bool success = gototable_interface__action__GoTable_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gototable_interface__action__GoTable_FeedbackMessage__destroy(gototable_interface__action__GoTable_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gototable_interface__action__GoTable_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gototable_interface__action__GoTable_FeedbackMessage__Sequence__init(gototable_interface__action__GoTable_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_FeedbackMessage * data = NULL;

  if (size) {
    data = (gototable_interface__action__GoTable_FeedbackMessage *)allocator.zero_allocate(size, sizeof(gototable_interface__action__GoTable_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gototable_interface__action__GoTable_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gototable_interface__action__GoTable_FeedbackMessage__fini(&data[i - 1]);
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
gototable_interface__action__GoTable_FeedbackMessage__Sequence__fini(gototable_interface__action__GoTable_FeedbackMessage__Sequence * array)
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
      gototable_interface__action__GoTable_FeedbackMessage__fini(&array->data[i]);
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

gototable_interface__action__GoTable_FeedbackMessage__Sequence *
gototable_interface__action__GoTable_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gototable_interface__action__GoTable_FeedbackMessage__Sequence * array = (gototable_interface__action__GoTable_FeedbackMessage__Sequence *)allocator.allocate(sizeof(gototable_interface__action__GoTable_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gototable_interface__action__GoTable_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gototable_interface__action__GoTable_FeedbackMessage__Sequence__destroy(gototable_interface__action__GoTable_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gototable_interface__action__GoTable_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gototable_interface__action__GoTable_FeedbackMessage__Sequence__are_equal(const gototable_interface__action__GoTable_FeedbackMessage__Sequence * lhs, const gototable_interface__action__GoTable_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gototable_interface__action__GoTable_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gototable_interface__action__GoTable_FeedbackMessage__Sequence__copy(
  const gototable_interface__action__GoTable_FeedbackMessage__Sequence * input,
  gototable_interface__action__GoTable_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gototable_interface__action__GoTable_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gototable_interface__action__GoTable_FeedbackMessage * data =
      (gototable_interface__action__GoTable_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gototable_interface__action__GoTable_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gototable_interface__action__GoTable_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gototable_interface__action__GoTable_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
