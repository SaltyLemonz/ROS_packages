// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tut_interfaces:msg/Message.idl
// generated code does not contain a copyright notice

#include "tut_interfaces/msg/detail/message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tut_interfaces
const rosidl_type_hash_t *
tut_interfaces__msg__Message__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0xc1, 0x7b, 0x1d, 0xb3, 0x73, 0x85, 0x78,
      0xfc, 0x91, 0xee, 0x04, 0x99, 0xc7, 0x32, 0x47,
      0xe9, 0xcd, 0x51, 0x6a, 0x10, 0x5a, 0x0b, 0xa4,
      0x05, 0x29, 0x54, 0xce, 0x1d, 0x18, 0xe0, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tut_interfaces__msg__Message__TYPE_NAME[] = "tut_interfaces/msg/Message";

// Define type names, field names, and default values
static char tut_interfaces__msg__Message__FIELD_NAME__flag[] = "flag";

static rosidl_runtime_c__type_description__Field tut_interfaces__msg__Message__FIELDS[] = {
  {
    {tut_interfaces__msg__Message__FIELD_NAME__flag, 4, 4},
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
tut_interfaces__msg__Message__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tut_interfaces__msg__Message__TYPE_NAME, 26, 26},
      {tut_interfaces__msg__Message__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool flag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tut_interfaces__msg__Message__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tut_interfaces__msg__Message__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tut_interfaces__msg__Message__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tut_interfaces__msg__Message__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
