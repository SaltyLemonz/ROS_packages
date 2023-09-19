// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tut_interfaces:msg/Ans.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tut_interfaces/msg/detail/ans__rosidl_typesupport_introspection_c.h"
#include "tut_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tut_interfaces/msg/detail/ans__functions.h"
#include "tut_interfaces/msg/detail/ans__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tut_interfaces__msg__Ans__init(message_memory);
}

void tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_fini_function(void * message_memory)
{
  tut_interfaces__msg__Ans__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tut_interfaces__msg__Ans, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_message_members = {
  "tut_interfaces__msg",  // message namespace
  "Ans",  // message name
  1,  // number of fields
  sizeof(tut_interfaces__msg__Ans),
  tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_message_member_array,  // message members
  tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_init_function,  // function to initialize message memory (memory has to be allocated)
  tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_message_type_support_handle = {
  0,
  &tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_message_members,
  get_message_typesupport_handle_function,
  &tut_interfaces__msg__Ans__get_type_hash,
  &tut_interfaces__msg__Ans__get_type_description,
  &tut_interfaces__msg__Ans__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tut_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tut_interfaces, msg, Ans)() {
  if (!tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_message_type_support_handle.typesupport_identifier) {
    tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tut_interfaces__msg__Ans__rosidl_typesupport_introspection_c__Ans_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
