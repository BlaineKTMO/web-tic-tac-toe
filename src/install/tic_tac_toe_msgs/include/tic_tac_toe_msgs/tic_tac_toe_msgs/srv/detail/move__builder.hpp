// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tic_tac_toe_msgs:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__BUILDER_HPP_
#define TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tic_tac_toe_msgs/srv/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tic_tac_toe_msgs
{

namespace srv
{

namespace builder
{

class Init_Move_Request_player
{
public:
  explicit Init_Move_Request_player(::tic_tac_toe_msgs::srv::Move_Request & msg)
  : msg_(msg)
  {}
  ::tic_tac_toe_msgs::srv::Move_Request player(::tic_tac_toe_msgs::srv::Move_Request::_player_type arg)
  {
    msg_.player = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tic_tac_toe_msgs::srv::Move_Request msg_;
};

class Init_Move_Request_board
{
public:
  Init_Move_Request_board()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Request_player board(::tic_tac_toe_msgs::srv::Move_Request::_board_type arg)
  {
    msg_.board = std::move(arg);
    return Init_Move_Request_player(msg_);
  }

private:
  ::tic_tac_toe_msgs::srv::Move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tic_tac_toe_msgs::srv::Move_Request>()
{
  return tic_tac_toe_msgs::srv::builder::Init_Move_Request_board();
}

}  // namespace tic_tac_toe_msgs


namespace tic_tac_toe_msgs
{

namespace srv
{

namespace builder
{

class Init_Move_Response_position
{
public:
  Init_Move_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tic_tac_toe_msgs::srv::Move_Response position(::tic_tac_toe_msgs::srv::Move_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tic_tac_toe_msgs::srv::Move_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tic_tac_toe_msgs::srv::Move_Response>()
{
  return tic_tac_toe_msgs::srv::builder::Init_Move_Response_position();
}

}  // namespace tic_tac_toe_msgs

#endif  // TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__BUILDER_HPP_
