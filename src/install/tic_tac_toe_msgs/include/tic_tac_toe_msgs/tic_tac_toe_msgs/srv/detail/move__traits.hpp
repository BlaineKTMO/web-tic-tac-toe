// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tic_tac_toe_msgs:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__TRAITS_HPP_
#define TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tic_tac_toe_msgs/srv/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tic_tac_toe_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Move_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: board
  {
    if (msg.board.size() == 0) {
      out << "board: []";
    } else {
      out << "board: [";
      size_t pending_items = msg.board.size();
      for (auto item : msg.board) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: player
  {
    out << "player: ";
    rosidl_generator_traits::value_to_yaml(msg.player, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.board.size() == 0) {
      out << "board: []\n";
    } else {
      out << "board:\n";
      for (auto item : msg.board) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: player
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "player: ";
    rosidl_generator_traits::value_to_yaml(msg.player, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tic_tac_toe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tic_tac_toe_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tic_tac_toe_msgs::srv::Move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tic_tac_toe_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tic_tac_toe_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tic_tac_toe_msgs::srv::Move_Request & msg)
{
  return tic_tac_toe_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tic_tac_toe_msgs::srv::Move_Request>()
{
  return "tic_tac_toe_msgs::srv::Move_Request";
}

template<>
inline const char * name<tic_tac_toe_msgs::srv::Move_Request>()
{
  return "tic_tac_toe_msgs/srv/Move_Request";
}

template<>
struct has_fixed_size<tic_tac_toe_msgs::srv::Move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tic_tac_toe_msgs::srv::Move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tic_tac_toe_msgs::srv::Move_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tic_tac_toe_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Move_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tic_tac_toe_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tic_tac_toe_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tic_tac_toe_msgs::srv::Move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tic_tac_toe_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tic_tac_toe_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tic_tac_toe_msgs::srv::Move_Response & msg)
{
  return tic_tac_toe_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tic_tac_toe_msgs::srv::Move_Response>()
{
  return "tic_tac_toe_msgs::srv::Move_Response";
}

template<>
inline const char * name<tic_tac_toe_msgs::srv::Move_Response>()
{
  return "tic_tac_toe_msgs/srv/Move_Response";
}

template<>
struct has_fixed_size<tic_tac_toe_msgs::srv::Move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tic_tac_toe_msgs::srv::Move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tic_tac_toe_msgs::srv::Move_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tic_tac_toe_msgs::srv::Move>()
{
  return "tic_tac_toe_msgs::srv::Move";
}

template<>
inline const char * name<tic_tac_toe_msgs::srv::Move>()
{
  return "tic_tac_toe_msgs/srv/Move";
}

template<>
struct has_fixed_size<tic_tac_toe_msgs::srv::Move>
  : std::integral_constant<
    bool,
    has_fixed_size<tic_tac_toe_msgs::srv::Move_Request>::value &&
    has_fixed_size<tic_tac_toe_msgs::srv::Move_Response>::value
  >
{
};

template<>
struct has_bounded_size<tic_tac_toe_msgs::srv::Move>
  : std::integral_constant<
    bool,
    has_bounded_size<tic_tac_toe_msgs::srv::Move_Request>::value &&
    has_bounded_size<tic_tac_toe_msgs::srv::Move_Response>::value
  >
{
};

template<>
struct is_service<tic_tac_toe_msgs::srv::Move>
  : std::true_type
{
};

template<>
struct is_service_request<tic_tac_toe_msgs::srv::Move_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tic_tac_toe_msgs::srv::Move_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__TRAITS_HPP_
