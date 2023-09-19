// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tut_interfaces:srv/CheckFib.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__STRUCT_H_
#define TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CheckFib in the package tut_interfaces.
typedef struct tut_interfaces__srv__CheckFib_Request
{
  int64_t num;
} tut_interfaces__srv__CheckFib_Request;

// Struct for a sequence of tut_interfaces__srv__CheckFib_Request.
typedef struct tut_interfaces__srv__CheckFib_Request__Sequence
{
  tut_interfaces__srv__CheckFib_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tut_interfaces__srv__CheckFib_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CheckFib in the package tut_interfaces.
typedef struct tut_interfaces__srv__CheckFib_Response
{
  bool data;
} tut_interfaces__srv__CheckFib_Response;

// Struct for a sequence of tut_interfaces__srv__CheckFib_Response.
typedef struct tut_interfaces__srv__CheckFib_Response__Sequence
{
  tut_interfaces__srv__CheckFib_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tut_interfaces__srv__CheckFib_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tut_interfaces__srv__CheckFib_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tut_interfaces__srv__CheckFib_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CheckFib in the package tut_interfaces.
typedef struct tut_interfaces__srv__CheckFib_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tut_interfaces__srv__CheckFib_Request__Sequence request;
  tut_interfaces__srv__CheckFib_Response__Sequence response;
} tut_interfaces__srv__CheckFib_Event;

// Struct for a sequence of tut_interfaces__srv__CheckFib_Event.
typedef struct tut_interfaces__srv__CheckFib_Event__Sequence
{
  tut_interfaces__srv__CheckFib_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tut_interfaces__srv__CheckFib_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUT_INTERFACES__SRV__DETAIL__CHECK_FIB__STRUCT_H_
