// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from godown_interface:action/Godownint.idl
// generated code does not contain a copyright notice
#include "godown_interface/action/detail/godownint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
godown_interface__action__Godownint_Goal__init(godown_interface__action__Godownint_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // targetx
  // targety
  return true;
}

void
godown_interface__action__Godownint_Goal__fini(godown_interface__action__Godownint_Goal * msg)
{
  if (!msg) {
    return;
  }
  // targetx
  // targety
}

bool
godown_interface__action__Godownint_Goal__are_equal(const godown_interface__action__Godownint_Goal * lhs, const godown_interface__action__Godownint_Goal * rhs)
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
godown_interface__action__Godownint_Goal__copy(
  const godown_interface__action__Godownint_Goal * input,
  godown_interface__action__Godownint_Goal * output)
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

godown_interface__action__Godownint_Goal *
godown_interface__action__Godownint_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Goal * msg = (godown_interface__action__Godownint_Goal *)allocator.allocate(sizeof(godown_interface__action__Godownint_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godown_interface__action__Godownint_Goal));
  bool success = godown_interface__action__Godownint_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godown_interface__action__Godownint_Goal__destroy(godown_interface__action__Godownint_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godown_interface__action__Godownint_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godown_interface__action__Godownint_Goal__Sequence__init(godown_interface__action__Godownint_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Goal * data = NULL;

  if (size) {
    data = (godown_interface__action__Godownint_Goal *)allocator.zero_allocate(size, sizeof(godown_interface__action__Godownint_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godown_interface__action__Godownint_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godown_interface__action__Godownint_Goal__fini(&data[i - 1]);
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
godown_interface__action__Godownint_Goal__Sequence__fini(godown_interface__action__Godownint_Goal__Sequence * array)
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
      godown_interface__action__Godownint_Goal__fini(&array->data[i]);
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

godown_interface__action__Godownint_Goal__Sequence *
godown_interface__action__Godownint_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Goal__Sequence * array = (godown_interface__action__Godownint_Goal__Sequence *)allocator.allocate(sizeof(godown_interface__action__Godownint_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godown_interface__action__Godownint_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godown_interface__action__Godownint_Goal__Sequence__destroy(godown_interface__action__Godownint_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godown_interface__action__Godownint_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godown_interface__action__Godownint_Goal__Sequence__are_equal(const godown_interface__action__Godownint_Goal__Sequence * lhs, const godown_interface__action__Godownint_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godown_interface__action__Godownint_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godown_interface__action__Godownint_Goal__Sequence__copy(
  const godown_interface__action__Godownint_Goal__Sequence * input,
  godown_interface__action__Godownint_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godown_interface__action__Godownint_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godown_interface__action__Godownint_Goal * data =
      (godown_interface__action__Godownint_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godown_interface__action__Godownint_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godown_interface__action__Godownint_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godown_interface__action__Godownint_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
godown_interface__action__Godownint_Result__init(godown_interface__action__Godownint_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
godown_interface__action__Godownint_Result__fini(godown_interface__action__Godownint_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
godown_interface__action__Godownint_Result__are_equal(const godown_interface__action__Godownint_Result * lhs, const godown_interface__action__Godownint_Result * rhs)
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
godown_interface__action__Godownint_Result__copy(
  const godown_interface__action__Godownint_Result * input,
  godown_interface__action__Godownint_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

godown_interface__action__Godownint_Result *
godown_interface__action__Godownint_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Result * msg = (godown_interface__action__Godownint_Result *)allocator.allocate(sizeof(godown_interface__action__Godownint_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godown_interface__action__Godownint_Result));
  bool success = godown_interface__action__Godownint_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godown_interface__action__Godownint_Result__destroy(godown_interface__action__Godownint_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godown_interface__action__Godownint_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godown_interface__action__Godownint_Result__Sequence__init(godown_interface__action__Godownint_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Result * data = NULL;

  if (size) {
    data = (godown_interface__action__Godownint_Result *)allocator.zero_allocate(size, sizeof(godown_interface__action__Godownint_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godown_interface__action__Godownint_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godown_interface__action__Godownint_Result__fini(&data[i - 1]);
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
godown_interface__action__Godownint_Result__Sequence__fini(godown_interface__action__Godownint_Result__Sequence * array)
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
      godown_interface__action__Godownint_Result__fini(&array->data[i]);
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

godown_interface__action__Godownint_Result__Sequence *
godown_interface__action__Godownint_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Result__Sequence * array = (godown_interface__action__Godownint_Result__Sequence *)allocator.allocate(sizeof(godown_interface__action__Godownint_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godown_interface__action__Godownint_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godown_interface__action__Godownint_Result__Sequence__destroy(godown_interface__action__Godownint_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godown_interface__action__Godownint_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godown_interface__action__Godownint_Result__Sequence__are_equal(const godown_interface__action__Godownint_Result__Sequence * lhs, const godown_interface__action__Godownint_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godown_interface__action__Godownint_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godown_interface__action__Godownint_Result__Sequence__copy(
  const godown_interface__action__Godownint_Result__Sequence * input,
  godown_interface__action__Godownint_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godown_interface__action__Godownint_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godown_interface__action__Godownint_Result * data =
      (godown_interface__action__Godownint_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godown_interface__action__Godownint_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godown_interface__action__Godownint_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godown_interface__action__Godownint_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
godown_interface__action__Godownint_Feedback__init(godown_interface__action__Godownint_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // currx
  // curry
  return true;
}

void
godown_interface__action__Godownint_Feedback__fini(godown_interface__action__Godownint_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // currx
  // curry
}

bool
godown_interface__action__Godownint_Feedback__are_equal(const godown_interface__action__Godownint_Feedback * lhs, const godown_interface__action__Godownint_Feedback * rhs)
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
godown_interface__action__Godownint_Feedback__copy(
  const godown_interface__action__Godownint_Feedback * input,
  godown_interface__action__Godownint_Feedback * output)
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

godown_interface__action__Godownint_Feedback *
godown_interface__action__Godownint_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Feedback * msg = (godown_interface__action__Godownint_Feedback *)allocator.allocate(sizeof(godown_interface__action__Godownint_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godown_interface__action__Godownint_Feedback));
  bool success = godown_interface__action__Godownint_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godown_interface__action__Godownint_Feedback__destroy(godown_interface__action__Godownint_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godown_interface__action__Godownint_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godown_interface__action__Godownint_Feedback__Sequence__init(godown_interface__action__Godownint_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Feedback * data = NULL;

  if (size) {
    data = (godown_interface__action__Godownint_Feedback *)allocator.zero_allocate(size, sizeof(godown_interface__action__Godownint_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godown_interface__action__Godownint_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godown_interface__action__Godownint_Feedback__fini(&data[i - 1]);
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
godown_interface__action__Godownint_Feedback__Sequence__fini(godown_interface__action__Godownint_Feedback__Sequence * array)
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
      godown_interface__action__Godownint_Feedback__fini(&array->data[i]);
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

godown_interface__action__Godownint_Feedback__Sequence *
godown_interface__action__Godownint_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_Feedback__Sequence * array = (godown_interface__action__Godownint_Feedback__Sequence *)allocator.allocate(sizeof(godown_interface__action__Godownint_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godown_interface__action__Godownint_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godown_interface__action__Godownint_Feedback__Sequence__destroy(godown_interface__action__Godownint_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godown_interface__action__Godownint_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godown_interface__action__Godownint_Feedback__Sequence__are_equal(const godown_interface__action__Godownint_Feedback__Sequence * lhs, const godown_interface__action__Godownint_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godown_interface__action__Godownint_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godown_interface__action__Godownint_Feedback__Sequence__copy(
  const godown_interface__action__Godownint_Feedback__Sequence * input,
  godown_interface__action__Godownint_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godown_interface__action__Godownint_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godown_interface__action__Godownint_Feedback * data =
      (godown_interface__action__Godownint_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godown_interface__action__Godownint_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godown_interface__action__Godownint_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godown_interface__action__Godownint_Feedback__copy(
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
// #include "godown_interface/action/detail/godownint__functions.h"

bool
godown_interface__action__Godownint_SendGoal_Request__init(godown_interface__action__Godownint_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    godown_interface__action__Godownint_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!godown_interface__action__Godownint_Goal__init(&msg->goal)) {
    godown_interface__action__Godownint_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
godown_interface__action__Godownint_SendGoal_Request__fini(godown_interface__action__Godownint_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  godown_interface__action__Godownint_Goal__fini(&msg->goal);
}

bool
godown_interface__action__Godownint_SendGoal_Request__are_equal(const godown_interface__action__Godownint_SendGoal_Request * lhs, const godown_interface__action__Godownint_SendGoal_Request * rhs)
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
  if (!godown_interface__action__Godownint_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
godown_interface__action__Godownint_SendGoal_Request__copy(
  const godown_interface__action__Godownint_SendGoal_Request * input,
  godown_interface__action__Godownint_SendGoal_Request * output)
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
  if (!godown_interface__action__Godownint_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

godown_interface__action__Godownint_SendGoal_Request *
godown_interface__action__Godownint_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_SendGoal_Request * msg = (godown_interface__action__Godownint_SendGoal_Request *)allocator.allocate(sizeof(godown_interface__action__Godownint_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godown_interface__action__Godownint_SendGoal_Request));
  bool success = godown_interface__action__Godownint_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godown_interface__action__Godownint_SendGoal_Request__destroy(godown_interface__action__Godownint_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godown_interface__action__Godownint_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godown_interface__action__Godownint_SendGoal_Request__Sequence__init(godown_interface__action__Godownint_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_SendGoal_Request * data = NULL;

  if (size) {
    data = (godown_interface__action__Godownint_SendGoal_Request *)allocator.zero_allocate(size, sizeof(godown_interface__action__Godownint_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godown_interface__action__Godownint_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godown_interface__action__Godownint_SendGoal_Request__fini(&data[i - 1]);
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
godown_interface__action__Godownint_SendGoal_Request__Sequence__fini(godown_interface__action__Godownint_SendGoal_Request__Sequence * array)
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
      godown_interface__action__Godownint_SendGoal_Request__fini(&array->data[i]);
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

godown_interface__action__Godownint_SendGoal_Request__Sequence *
godown_interface__action__Godownint_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_SendGoal_Request__Sequence * array = (godown_interface__action__Godownint_SendGoal_Request__Sequence *)allocator.allocate(sizeof(godown_interface__action__Godownint_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godown_interface__action__Godownint_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godown_interface__action__Godownint_SendGoal_Request__Sequence__destroy(godown_interface__action__Godownint_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godown_interface__action__Godownint_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godown_interface__action__Godownint_SendGoal_Request__Sequence__are_equal(const godown_interface__action__Godownint_SendGoal_Request__Sequence * lhs, const godown_interface__action__Godownint_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godown_interface__action__Godownint_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godown_interface__action__Godownint_SendGoal_Request__Sequence__copy(
  const godown_interface__action__Godownint_SendGoal_Request__Sequence * input,
  godown_interface__action__Godownint_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godown_interface__action__Godownint_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godown_interface__action__Godownint_SendGoal_Request * data =
      (godown_interface__action__Godownint_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godown_interface__action__Godownint_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godown_interface__action__Godownint_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godown_interface__action__Godownint_SendGoal_Request__copy(
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
godown_interface__action__Godownint_SendGoal_Response__init(godown_interface__action__Godownint_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    godown_interface__action__Godownint_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
godown_interface__action__Godownint_SendGoal_Response__fini(godown_interface__action__Godownint_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
godown_interface__action__Godownint_SendGoal_Response__are_equal(const godown_interface__action__Godownint_SendGoal_Response * lhs, const godown_interface__action__Godownint_SendGoal_Response * rhs)
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
godown_interface__action__Godownint_SendGoal_Response__copy(
  const godown_interface__action__Godownint_SendGoal_Response * input,
  godown_interface__action__Godownint_SendGoal_Response * output)
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

godown_interface__action__Godownint_SendGoal_Response *
godown_interface__action__Godownint_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_SendGoal_Response * msg = (godown_interface__action__Godownint_SendGoal_Response *)allocator.allocate(sizeof(godown_interface__action__Godownint_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godown_interface__action__Godownint_SendGoal_Response));
  bool success = godown_interface__action__Godownint_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godown_interface__action__Godownint_SendGoal_Response__destroy(godown_interface__action__Godownint_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godown_interface__action__Godownint_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godown_interface__action__Godownint_SendGoal_Response__Sequence__init(godown_interface__action__Godownint_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_SendGoal_Response * data = NULL;

  if (size) {
    data = (godown_interface__action__Godownint_SendGoal_Response *)allocator.zero_allocate(size, sizeof(godown_interface__action__Godownint_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godown_interface__action__Godownint_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godown_interface__action__Godownint_SendGoal_Response__fini(&data[i - 1]);
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
godown_interface__action__Godownint_SendGoal_Response__Sequence__fini(godown_interface__action__Godownint_SendGoal_Response__Sequence * array)
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
      godown_interface__action__Godownint_SendGoal_Response__fini(&array->data[i]);
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

godown_interface__action__Godownint_SendGoal_Response__Sequence *
godown_interface__action__Godownint_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_SendGoal_Response__Sequence * array = (godown_interface__action__Godownint_SendGoal_Response__Sequence *)allocator.allocate(sizeof(godown_interface__action__Godownint_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godown_interface__action__Godownint_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godown_interface__action__Godownint_SendGoal_Response__Sequence__destroy(godown_interface__action__Godownint_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godown_interface__action__Godownint_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godown_interface__action__Godownint_SendGoal_Response__Sequence__are_equal(const godown_interface__action__Godownint_SendGoal_Response__Sequence * lhs, const godown_interface__action__Godownint_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godown_interface__action__Godownint_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godown_interface__action__Godownint_SendGoal_Response__Sequence__copy(
  const godown_interface__action__Godownint_SendGoal_Response__Sequence * input,
  godown_interface__action__Godownint_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godown_interface__action__Godownint_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godown_interface__action__Godownint_SendGoal_Response * data =
      (godown_interface__action__Godownint_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godown_interface__action__Godownint_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godown_interface__action__Godownint_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godown_interface__action__Godownint_SendGoal_Response__copy(
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
godown_interface__action__Godownint_GetResult_Request__init(godown_interface__action__Godownint_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    godown_interface__action__Godownint_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
godown_interface__action__Godownint_GetResult_Request__fini(godown_interface__action__Godownint_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
godown_interface__action__Godownint_GetResult_Request__are_equal(const godown_interface__action__Godownint_GetResult_Request * lhs, const godown_interface__action__Godownint_GetResult_Request * rhs)
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
godown_interface__action__Godownint_GetResult_Request__copy(
  const godown_interface__action__Godownint_GetResult_Request * input,
  godown_interface__action__Godownint_GetResult_Request * output)
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

godown_interface__action__Godownint_GetResult_Request *
godown_interface__action__Godownint_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_GetResult_Request * msg = (godown_interface__action__Godownint_GetResult_Request *)allocator.allocate(sizeof(godown_interface__action__Godownint_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godown_interface__action__Godownint_GetResult_Request));
  bool success = godown_interface__action__Godownint_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godown_interface__action__Godownint_GetResult_Request__destroy(godown_interface__action__Godownint_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godown_interface__action__Godownint_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godown_interface__action__Godownint_GetResult_Request__Sequence__init(godown_interface__action__Godownint_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_GetResult_Request * data = NULL;

  if (size) {
    data = (godown_interface__action__Godownint_GetResult_Request *)allocator.zero_allocate(size, sizeof(godown_interface__action__Godownint_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godown_interface__action__Godownint_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godown_interface__action__Godownint_GetResult_Request__fini(&data[i - 1]);
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
godown_interface__action__Godownint_GetResult_Request__Sequence__fini(godown_interface__action__Godownint_GetResult_Request__Sequence * array)
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
      godown_interface__action__Godownint_GetResult_Request__fini(&array->data[i]);
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

godown_interface__action__Godownint_GetResult_Request__Sequence *
godown_interface__action__Godownint_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_GetResult_Request__Sequence * array = (godown_interface__action__Godownint_GetResult_Request__Sequence *)allocator.allocate(sizeof(godown_interface__action__Godownint_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godown_interface__action__Godownint_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godown_interface__action__Godownint_GetResult_Request__Sequence__destroy(godown_interface__action__Godownint_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godown_interface__action__Godownint_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godown_interface__action__Godownint_GetResult_Request__Sequence__are_equal(const godown_interface__action__Godownint_GetResult_Request__Sequence * lhs, const godown_interface__action__Godownint_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godown_interface__action__Godownint_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godown_interface__action__Godownint_GetResult_Request__Sequence__copy(
  const godown_interface__action__Godownint_GetResult_Request__Sequence * input,
  godown_interface__action__Godownint_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godown_interface__action__Godownint_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godown_interface__action__Godownint_GetResult_Request * data =
      (godown_interface__action__Godownint_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godown_interface__action__Godownint_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godown_interface__action__Godownint_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godown_interface__action__Godownint_GetResult_Request__copy(
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
// #include "godown_interface/action/detail/godownint__functions.h"

bool
godown_interface__action__Godownint_GetResult_Response__init(godown_interface__action__Godownint_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!godown_interface__action__Godownint_Result__init(&msg->result)) {
    godown_interface__action__Godownint_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
godown_interface__action__Godownint_GetResult_Response__fini(godown_interface__action__Godownint_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  godown_interface__action__Godownint_Result__fini(&msg->result);
}

bool
godown_interface__action__Godownint_GetResult_Response__are_equal(const godown_interface__action__Godownint_GetResult_Response * lhs, const godown_interface__action__Godownint_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!godown_interface__action__Godownint_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
godown_interface__action__Godownint_GetResult_Response__copy(
  const godown_interface__action__Godownint_GetResult_Response * input,
  godown_interface__action__Godownint_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!godown_interface__action__Godownint_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

godown_interface__action__Godownint_GetResult_Response *
godown_interface__action__Godownint_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_GetResult_Response * msg = (godown_interface__action__Godownint_GetResult_Response *)allocator.allocate(sizeof(godown_interface__action__Godownint_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godown_interface__action__Godownint_GetResult_Response));
  bool success = godown_interface__action__Godownint_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godown_interface__action__Godownint_GetResult_Response__destroy(godown_interface__action__Godownint_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godown_interface__action__Godownint_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godown_interface__action__Godownint_GetResult_Response__Sequence__init(godown_interface__action__Godownint_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_GetResult_Response * data = NULL;

  if (size) {
    data = (godown_interface__action__Godownint_GetResult_Response *)allocator.zero_allocate(size, sizeof(godown_interface__action__Godownint_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godown_interface__action__Godownint_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godown_interface__action__Godownint_GetResult_Response__fini(&data[i - 1]);
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
godown_interface__action__Godownint_GetResult_Response__Sequence__fini(godown_interface__action__Godownint_GetResult_Response__Sequence * array)
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
      godown_interface__action__Godownint_GetResult_Response__fini(&array->data[i]);
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

godown_interface__action__Godownint_GetResult_Response__Sequence *
godown_interface__action__Godownint_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_GetResult_Response__Sequence * array = (godown_interface__action__Godownint_GetResult_Response__Sequence *)allocator.allocate(sizeof(godown_interface__action__Godownint_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godown_interface__action__Godownint_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godown_interface__action__Godownint_GetResult_Response__Sequence__destroy(godown_interface__action__Godownint_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godown_interface__action__Godownint_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godown_interface__action__Godownint_GetResult_Response__Sequence__are_equal(const godown_interface__action__Godownint_GetResult_Response__Sequence * lhs, const godown_interface__action__Godownint_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godown_interface__action__Godownint_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godown_interface__action__Godownint_GetResult_Response__Sequence__copy(
  const godown_interface__action__Godownint_GetResult_Response__Sequence * input,
  godown_interface__action__Godownint_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godown_interface__action__Godownint_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godown_interface__action__Godownint_GetResult_Response * data =
      (godown_interface__action__Godownint_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godown_interface__action__Godownint_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godown_interface__action__Godownint_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godown_interface__action__Godownint_GetResult_Response__copy(
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
// #include "godown_interface/action/detail/godownint__functions.h"

bool
godown_interface__action__Godownint_FeedbackMessage__init(godown_interface__action__Godownint_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    godown_interface__action__Godownint_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!godown_interface__action__Godownint_Feedback__init(&msg->feedback)) {
    godown_interface__action__Godownint_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
godown_interface__action__Godownint_FeedbackMessage__fini(godown_interface__action__Godownint_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  godown_interface__action__Godownint_Feedback__fini(&msg->feedback);
}

bool
godown_interface__action__Godownint_FeedbackMessage__are_equal(const godown_interface__action__Godownint_FeedbackMessage * lhs, const godown_interface__action__Godownint_FeedbackMessage * rhs)
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
  if (!godown_interface__action__Godownint_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
godown_interface__action__Godownint_FeedbackMessage__copy(
  const godown_interface__action__Godownint_FeedbackMessage * input,
  godown_interface__action__Godownint_FeedbackMessage * output)
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
  if (!godown_interface__action__Godownint_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

godown_interface__action__Godownint_FeedbackMessage *
godown_interface__action__Godownint_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_FeedbackMessage * msg = (godown_interface__action__Godownint_FeedbackMessage *)allocator.allocate(sizeof(godown_interface__action__Godownint_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godown_interface__action__Godownint_FeedbackMessage));
  bool success = godown_interface__action__Godownint_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godown_interface__action__Godownint_FeedbackMessage__destroy(godown_interface__action__Godownint_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godown_interface__action__Godownint_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godown_interface__action__Godownint_FeedbackMessage__Sequence__init(godown_interface__action__Godownint_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_FeedbackMessage * data = NULL;

  if (size) {
    data = (godown_interface__action__Godownint_FeedbackMessage *)allocator.zero_allocate(size, sizeof(godown_interface__action__Godownint_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godown_interface__action__Godownint_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godown_interface__action__Godownint_FeedbackMessage__fini(&data[i - 1]);
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
godown_interface__action__Godownint_FeedbackMessage__Sequence__fini(godown_interface__action__Godownint_FeedbackMessage__Sequence * array)
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
      godown_interface__action__Godownint_FeedbackMessage__fini(&array->data[i]);
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

godown_interface__action__Godownint_FeedbackMessage__Sequence *
godown_interface__action__Godownint_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godown_interface__action__Godownint_FeedbackMessage__Sequence * array = (godown_interface__action__Godownint_FeedbackMessage__Sequence *)allocator.allocate(sizeof(godown_interface__action__Godownint_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godown_interface__action__Godownint_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godown_interface__action__Godownint_FeedbackMessage__Sequence__destroy(godown_interface__action__Godownint_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godown_interface__action__Godownint_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godown_interface__action__Godownint_FeedbackMessage__Sequence__are_equal(const godown_interface__action__Godownint_FeedbackMessage__Sequence * lhs, const godown_interface__action__Godownint_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godown_interface__action__Godownint_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godown_interface__action__Godownint_FeedbackMessage__Sequence__copy(
  const godown_interface__action__Godownint_FeedbackMessage__Sequence * input,
  godown_interface__action__Godownint_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godown_interface__action__Godownint_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godown_interface__action__Godownint_FeedbackMessage * data =
      (godown_interface__action__Godownint_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godown_interface__action__Godownint_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godown_interface__action__Godownint_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godown_interface__action__Godownint_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
