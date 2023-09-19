// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tut_interfaces:srv/CheckFib.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tut_interfaces/srv/detail/check_fib__struct.h"
#include "tut_interfaces/srv/detail/check_fib__type_support.h"
#include "tut_interfaces/srv/detail/check_fib__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tut_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckFib_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckFib_Request_type_support_ids_t;

static const _CheckFib_Request_type_support_ids_t _CheckFib_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckFib_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckFib_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckFib_Request_type_support_symbol_names_t _CheckFib_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tut_interfaces, srv, CheckFib_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tut_interfaces, srv, CheckFib_Request)),
  }
};

typedef struct _CheckFib_Request_type_support_data_t
{
  void * data[2];
} _CheckFib_Request_type_support_data_t;

static _CheckFib_Request_type_support_data_t _CheckFib_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckFib_Request_message_typesupport_map = {
  2,
  "tut_interfaces",
  &_CheckFib_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CheckFib_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CheckFib_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckFib_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckFib_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tut_interfaces__srv__CheckFib_Request__get_type_hash,
  &tut_interfaces__srv__CheckFib_Request__get_type_description,
  &tut_interfaces__srv__CheckFib_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tut_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tut_interfaces, srv, CheckFib_Request)() {
  return &::tut_interfaces::srv::rosidl_typesupport_c::CheckFib_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tut_interfaces/srv/detail/check_fib__struct.h"
// already included above
// #include "tut_interfaces/srv/detail/check_fib__type_support.h"
// already included above
// #include "tut_interfaces/srv/detail/check_fib__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tut_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckFib_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckFib_Response_type_support_ids_t;

static const _CheckFib_Response_type_support_ids_t _CheckFib_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckFib_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckFib_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckFib_Response_type_support_symbol_names_t _CheckFib_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tut_interfaces, srv, CheckFib_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tut_interfaces, srv, CheckFib_Response)),
  }
};

typedef struct _CheckFib_Response_type_support_data_t
{
  void * data[2];
} _CheckFib_Response_type_support_data_t;

static _CheckFib_Response_type_support_data_t _CheckFib_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckFib_Response_message_typesupport_map = {
  2,
  "tut_interfaces",
  &_CheckFib_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CheckFib_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CheckFib_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckFib_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckFib_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tut_interfaces__srv__CheckFib_Response__get_type_hash,
  &tut_interfaces__srv__CheckFib_Response__get_type_description,
  &tut_interfaces__srv__CheckFib_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tut_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tut_interfaces, srv, CheckFib_Response)() {
  return &::tut_interfaces::srv::rosidl_typesupport_c::CheckFib_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tut_interfaces/srv/detail/check_fib__struct.h"
// already included above
// #include "tut_interfaces/srv/detail/check_fib__type_support.h"
// already included above
// #include "tut_interfaces/srv/detail/check_fib__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tut_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CheckFib_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckFib_Event_type_support_ids_t;

static const _CheckFib_Event_type_support_ids_t _CheckFib_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckFib_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckFib_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckFib_Event_type_support_symbol_names_t _CheckFib_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tut_interfaces, srv, CheckFib_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tut_interfaces, srv, CheckFib_Event)),
  }
};

typedef struct _CheckFib_Event_type_support_data_t
{
  void * data[2];
} _CheckFib_Event_type_support_data_t;

static _CheckFib_Event_type_support_data_t _CheckFib_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckFib_Event_message_typesupport_map = {
  2,
  "tut_interfaces",
  &_CheckFib_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CheckFib_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CheckFib_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CheckFib_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckFib_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tut_interfaces__srv__CheckFib_Event__get_type_hash,
  &tut_interfaces__srv__CheckFib_Event__get_type_description,
  &tut_interfaces__srv__CheckFib_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tut_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tut_interfaces, srv, CheckFib_Event)() {
  return &::tut_interfaces::srv::rosidl_typesupport_c::CheckFib_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tut_interfaces/srv/detail/check_fib__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace tut_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _CheckFib_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CheckFib_type_support_ids_t;

static const _CheckFib_type_support_ids_t _CheckFib_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CheckFib_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CheckFib_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CheckFib_type_support_symbol_names_t _CheckFib_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tut_interfaces, srv, CheckFib)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tut_interfaces, srv, CheckFib)),
  }
};

typedef struct _CheckFib_type_support_data_t
{
  void * data[2];
} _CheckFib_type_support_data_t;

static _CheckFib_type_support_data_t _CheckFib_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CheckFib_service_typesupport_map = {
  2,
  "tut_interfaces",
  &_CheckFib_service_typesupport_ids.typesupport_identifier[0],
  &_CheckFib_service_typesupport_symbol_names.symbol_name[0],
  &_CheckFib_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CheckFib_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CheckFib_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CheckFib_Request_message_type_support_handle,
  &CheckFib_Response_message_type_support_handle,
  &CheckFib_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tut_interfaces,
    srv,
    CheckFib
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tut_interfaces,
    srv,
    CheckFib
  ),
  &tut_interfaces__srv__CheckFib__get_type_hash,
  &tut_interfaces__srv__CheckFib__get_type_description,
  &tut_interfaces__srv__CheckFib__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tut_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tut_interfaces, srv, CheckFib)() {
  return &::tut_interfaces::srv::rosidl_typesupport_c::CheckFib_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
