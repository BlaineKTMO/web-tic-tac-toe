// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tic_tac_toe_msgs:srv/Move.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tic_tac_toe_msgs/srv/detail/move__rosidl_typesupport_introspection_c.h"
#include "tic_tac_toe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tic_tac_toe_msgs/srv/detail/move__functions.h"
#include "tic_tac_toe_msgs/srv/detail/move__struct.h"


// Include directives for member types
// Member `board`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tic_tac_toe_msgs__srv__Move_Request__init(message_memory);
}

void tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_fini_function(void * message_memory)
{
  tic_tac_toe_msgs__srv__Move_Request__fini(message_memory);
}

size_t tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__size_function__Move_Request__board(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__get_const_function__Move_Request__board(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__get_function__Move_Request__board(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__fetch_function__Move_Request__board(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__get_const_function__Move_Request__board(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__assign_function__Move_Request__board(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__get_function__Move_Request__board(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__resize_function__Move_Request__board(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_member_array[2] = {
  {
    "board",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tic_tac_toe_msgs__srv__Move_Request, board),  // bytes offset in struct
    NULL,  // default value
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__size_function__Move_Request__board,  // size() function pointer
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__get_const_function__Move_Request__board,  // get_const(index) function pointer
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__get_function__Move_Request__board,  // get(index) function pointer
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__fetch_function__Move_Request__board,  // fetch(index, &value) function pointer
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__assign_function__Move_Request__board,  // assign(index, value) function pointer
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__resize_function__Move_Request__board  // resize(index) function pointer
  },
  {
    "player",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tic_tac_toe_msgs__srv__Move_Request, player),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_members = {
  "tic_tac_toe_msgs__srv",  // message namespace
  "Move_Request",  // message name
  2,  // number of fields
  sizeof(tic_tac_toe_msgs__srv__Move_Request),
  tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_member_array,  // message members
  tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle = {
  0,
  &tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tic_tac_toe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tic_tac_toe_msgs, srv, Move_Request)() {
  if (!tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle.typesupport_identifier) {
    tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tic_tac_toe_msgs__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tic_tac_toe_msgs/srv/detail/move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tic_tac_toe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tic_tac_toe_msgs/srv/detail/move__functions.h"
// already included above
// #include "tic_tac_toe_msgs/srv/detail/move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tic_tac_toe_msgs__srv__Move_Response__init(message_memory);
}

void tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_fini_function(void * message_memory)
{
  tic_tac_toe_msgs__srv__Move_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tic_tac_toe_msgs__srv__Move_Response, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_members = {
  "tic_tac_toe_msgs__srv",  // message namespace
  "Move_Response",  // message name
  1,  // number of fields
  sizeof(tic_tac_toe_msgs__srv__Move_Response),
  tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_member_array,  // message members
  tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle = {
  0,
  &tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tic_tac_toe_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tic_tac_toe_msgs, srv, Move_Response)() {
  if (!tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle.typesupport_identifier) {
    tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tic_tac_toe_msgs__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tic_tac_toe_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tic_tac_toe_msgs/srv/detail/move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_members = {
  "tic_tac_toe_msgs__srv",  // service namespace
  "Move",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle,
  NULL  // response message
  // tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle
};

static rosidl_service_type_support_t tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle = {
  0,
  &tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tic_tac_toe_msgs, srv, Move_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tic_tac_toe_msgs, srv, Move_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tic_tac_toe_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tic_tac_toe_msgs, srv, Move)() {
  if (!tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.typesupport_identifier) {
    tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tic_tac_toe_msgs, srv, Move_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tic_tac_toe_msgs, srv, Move_Response)()->data;
  }

  return &tic_tac_toe_msgs__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle;
}
