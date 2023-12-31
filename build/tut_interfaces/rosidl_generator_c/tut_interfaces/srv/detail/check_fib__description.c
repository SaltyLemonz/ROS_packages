// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tut_interfaces:srv/CheckFib.idl
// generated code does not contain a copyright notice

#include "tut_interfaces/srv/detail/check_fib__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tut_interfaces
const rosidl_type_hash_t *
tut_interfaces__srv__CheckFib__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xd7, 0x8b, 0x0b, 0xaf, 0x6b, 0x61, 0x60,
      0x20, 0x8f, 0x5d, 0x27, 0x4e, 0x9e, 0xba, 0xb8,
      0xa2, 0x44, 0x0a, 0x2b, 0xfe, 0xf6, 0xba, 0x97,
      0xcf, 0x48, 0x89, 0x0c, 0xe7, 0x15, 0xbe, 0x01,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tut_interfaces
const rosidl_type_hash_t *
tut_interfaces__srv__CheckFib_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x52, 0xa5, 0x40, 0xf0, 0xa2, 0xd4, 0x6f,
      0x55, 0xb8, 0xcc, 0x07, 0x24, 0xc7, 0x6c, 0x7b,
      0xad, 0xde, 0x8f, 0x01, 0xc5, 0xf5, 0xfb, 0x4e,
      0x4d, 0xf5, 0x20, 0x24, 0x58, 0x68, 0x88, 0x4f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tut_interfaces
const rosidl_type_hash_t *
tut_interfaces__srv__CheckFib_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0xb3, 0x77, 0xe0, 0xbd, 0xa7, 0x80, 0x07,
      0x24, 0x7e, 0xb5, 0x22, 0x68, 0x23, 0x6b, 0xce,
      0x58, 0x34, 0x13, 0x17, 0x27, 0x4d, 0x3a, 0xb6,
      0x9c, 0xf8, 0x70, 0x76, 0x26, 0x98, 0x8d, 0x8b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_tut_interfaces
const rosidl_type_hash_t *
tut_interfaces__srv__CheckFib_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0x33, 0x1d, 0x40, 0xfa, 0x52, 0x7d, 0x07,
      0x2f, 0x7e, 0x0f, 0x2d, 0x53, 0xff, 0xbd, 0x2c,
      0x27, 0x6b, 0x8d, 0x79, 0xb2, 0x13, 0xf4, 0x3d,
      0xcf, 0xb2, 0x7e, 0x8d, 0x2d, 0x46, 0x02, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char tut_interfaces__srv__CheckFib__TYPE_NAME[] = "tut_interfaces/srv/CheckFib";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char tut_interfaces__srv__CheckFib_Event__TYPE_NAME[] = "tut_interfaces/srv/CheckFib_Event";
static char tut_interfaces__srv__CheckFib_Request__TYPE_NAME[] = "tut_interfaces/srv/CheckFib_Request";
static char tut_interfaces__srv__CheckFib_Response__TYPE_NAME[] = "tut_interfaces/srv/CheckFib_Response";

// Define type names, field names, and default values
static char tut_interfaces__srv__CheckFib__FIELD_NAME__request_message[] = "request_message";
static char tut_interfaces__srv__CheckFib__FIELD_NAME__response_message[] = "response_message";
static char tut_interfaces__srv__CheckFib__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field tut_interfaces__srv__CheckFib__FIELDS[] = {
  {
    {tut_interfaces__srv__CheckFib__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tut_interfaces__srv__CheckFib_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tut_interfaces__srv__CheckFib_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {tut_interfaces__srv__CheckFib_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tut_interfaces__srv__CheckFib__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tut_interfaces__srv__CheckFib__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tut_interfaces__srv__CheckFib__TYPE_NAME, 27, 27},
      {tut_interfaces__srv__CheckFib__FIELDS, 3, 3},
    },
    {tut_interfaces__srv__CheckFib__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tut_interfaces__srv__CheckFib_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tut_interfaces__srv__CheckFib_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = tut_interfaces__srv__CheckFib_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tut_interfaces__srv__CheckFib_Request__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field tut_interfaces__srv__CheckFib_Request__FIELDS[] = {
  {
    {tut_interfaces__srv__CheckFib_Request__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tut_interfaces__srv__CheckFib_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tut_interfaces__srv__CheckFib_Request__TYPE_NAME, 35, 35},
      {tut_interfaces__srv__CheckFib_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tut_interfaces__srv__CheckFib_Response__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field tut_interfaces__srv__CheckFib_Response__FIELDS[] = {
  {
    {tut_interfaces__srv__CheckFib_Response__FIELD_NAME__data, 4, 4},
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
tut_interfaces__srv__CheckFib_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tut_interfaces__srv__CheckFib_Response__TYPE_NAME, 36, 36},
      {tut_interfaces__srv__CheckFib_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char tut_interfaces__srv__CheckFib_Event__FIELD_NAME__info[] = "info";
static char tut_interfaces__srv__CheckFib_Event__FIELD_NAME__request[] = "request";
static char tut_interfaces__srv__CheckFib_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field tut_interfaces__srv__CheckFib_Event__FIELDS[] = {
  {
    {tut_interfaces__srv__CheckFib_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tut_interfaces__srv__CheckFib_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {tut_interfaces__srv__CheckFib_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tut_interfaces__srv__CheckFib_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {tut_interfaces__srv__CheckFib_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tut_interfaces__srv__CheckFib_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tut_interfaces__srv__CheckFib_Event__TYPE_NAME, 33, 33},
      {tut_interfaces__srv__CheckFib_Event__FIELDS, 3, 3},
    },
    {tut_interfaces__srv__CheckFib_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = tut_interfaces__srv__CheckFib_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = tut_interfaces__srv__CheckFib_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num\n"
  "---\n"
  "bool data";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tut_interfaces__srv__CheckFib__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tut_interfaces__srv__CheckFib__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tut_interfaces__srv__CheckFib_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tut_interfaces__srv__CheckFib_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tut_interfaces__srv__CheckFib_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tut_interfaces__srv__CheckFib_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
tut_interfaces__srv__CheckFib_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tut_interfaces__srv__CheckFib_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tut_interfaces__srv__CheckFib__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tut_interfaces__srv__CheckFib__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tut_interfaces__srv__CheckFib_Event__get_individual_type_description_source(NULL);
    sources[4] = *tut_interfaces__srv__CheckFib_Request__get_individual_type_description_source(NULL);
    sources[5] = *tut_interfaces__srv__CheckFib_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tut_interfaces__srv__CheckFib_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tut_interfaces__srv__CheckFib_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tut_interfaces__srv__CheckFib_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tut_interfaces__srv__CheckFib_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tut_interfaces__srv__CheckFib_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tut_interfaces__srv__CheckFib_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *tut_interfaces__srv__CheckFib_Request__get_individual_type_description_source(NULL);
    sources[4] = *tut_interfaces__srv__CheckFib_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
