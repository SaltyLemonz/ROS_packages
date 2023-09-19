// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tut_interfaces:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACES__MSG__DETAIL__MESSAGE__STRUCT_H_
#define TUT_INTERFACES__MSG__DETAIL__MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Message in the package tut_interfaces.
typedef struct tut_interfaces__msg__Message
{
  bool flag;
} tut_interfaces__msg__Message;

// Struct for a sequence of tut_interfaces__msg__Message.
typedef struct tut_interfaces__msg__Message__Sequence
{
  tut_interfaces__msg__Message * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tut_interfaces__msg__Message__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUT_INTERFACES__MSG__DETAIL__MESSAGE__STRUCT_H_
