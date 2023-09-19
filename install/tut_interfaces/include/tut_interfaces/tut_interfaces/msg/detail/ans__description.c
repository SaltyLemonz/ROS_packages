// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tut_interfaces:msg/Ans.idl
// generated code does not contain a copyright notice

#include "tut_interfaces/msg/detail/ans__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tut_interfaces
const rosidl_type_hash_t *
tut_interfaces__msg__Ans__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0x4f, 0x9a, 0x91, 0x0b, 0x68, 0xe8, 0xde,
      0xd0, 0x0a, 0x0b, 0x46, 0x0d, 0x45, 0x92, 0xd2,
      0xfb, 0xd9, 0x73, 0xed, 0xec, 0x56, 0xad, 0x1e,
      0x30, 0x52, 0xec, 0x02, 0x95, 0x91, 0x5f, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tut_interfaces__msg__Ans__TYPE_NAME[] = "tut_interfaces/msg/Ans";

// Define type names, field names, and default values
static char tut_interfaces__msg__Ans__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field tut_interfaces__msg__Ans__FIELDS[] = {
  {
    {tut_interfaces__msg__Ans__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tut_interfaces__msg__Ans__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tut_interfaces__msg__Ans__TYPE_NAME, 22, 22},
      {tut_interfaces__msg__Ans__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tut_interfaces__msg__Ans__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tut_interfaces__msg__Ans__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tut_interfaces__msg__Ans__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tut_interfaces__msg__Ans__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
