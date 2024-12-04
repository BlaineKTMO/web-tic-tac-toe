// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tic_tac_toe_msgs:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__STRUCT_H_
#define TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'board'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Move in the package tic_tac_toe_msgs.
typedef struct tic_tac_toe_msgs__srv__Move_Request
{
  rosidl_runtime_c__uint8__Sequence board;
  uint8_t player;
} tic_tac_toe_msgs__srv__Move_Request;

// Struct for a sequence of tic_tac_toe_msgs__srv__Move_Request.
typedef struct tic_tac_toe_msgs__srv__Move_Request__Sequence
{
  tic_tac_toe_msgs__srv__Move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tic_tac_toe_msgs__srv__Move_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Move in the package tic_tac_toe_msgs.
typedef struct tic_tac_toe_msgs__srv__Move_Response
{
  int32_t position;
} tic_tac_toe_msgs__srv__Move_Response;

// Struct for a sequence of tic_tac_toe_msgs__srv__Move_Response.
typedef struct tic_tac_toe_msgs__srv__Move_Response__Sequence
{
  tic_tac_toe_msgs__srv__Move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tic_tac_toe_msgs__srv__Move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__STRUCT_H_
