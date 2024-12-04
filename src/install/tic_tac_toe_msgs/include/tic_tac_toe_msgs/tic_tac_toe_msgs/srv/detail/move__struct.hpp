// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tic_tac_toe_msgs:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__STRUCT_HPP_
#define TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tic_tac_toe_msgs__srv__Move_Request __attribute__((deprecated))
#else
# define DEPRECATED__tic_tac_toe_msgs__srv__Move_Request __declspec(deprecated)
#endif

namespace tic_tac_toe_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Request_
{
  using Type = Move_Request_<ContainerAllocator>;

  explicit Move_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->player = 0;
    }
  }

  explicit Move_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->player = 0;
    }
  }

  // field types and members
  using _board_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _board_type board;
  using _player_type =
    uint8_t;
  _player_type player;

  // setters for named parameter idiom
  Type & set__board(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->board = _arg;
    return *this;
  }
  Type & set__player(
    const uint8_t & _arg)
  {
    this->player = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tic_tac_toe_msgs__srv__Move_Request
    std::shared_ptr<tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tic_tac_toe_msgs__srv__Move_Request
    std::shared_ptr<tic_tac_toe_msgs::srv::Move_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Request_ & other) const
  {
    if (this->board != other.board) {
      return false;
    }
    if (this->player != other.player) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Request_

// alias to use template instance with default allocator
using Move_Request =
  tic_tac_toe_msgs::srv::Move_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tic_tac_toe_msgs


#ifndef _WIN32
# define DEPRECATED__tic_tac_toe_msgs__srv__Move_Response __attribute__((deprecated))
#else
# define DEPRECATED__tic_tac_toe_msgs__srv__Move_Response __declspec(deprecated)
#endif

namespace tic_tac_toe_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Response_
{
  using Type = Move_Response_<ContainerAllocator>;

  explicit Move_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0l;
    }
  }

  explicit Move_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0l;
    }
  }

  // field types and members
  using _position_type =
    int32_t;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const int32_t & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tic_tac_toe_msgs__srv__Move_Response
    std::shared_ptr<tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tic_tac_toe_msgs__srv__Move_Response
    std::shared_ptr<tic_tac_toe_msgs::srv::Move_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Response_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Response_

// alias to use template instance with default allocator
using Move_Response =
  tic_tac_toe_msgs::srv::Move_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tic_tac_toe_msgs

namespace tic_tac_toe_msgs
{

namespace srv
{

struct Move
{
  using Request = tic_tac_toe_msgs::srv::Move_Request;
  using Response = tic_tac_toe_msgs::srv::Move_Response;
};

}  // namespace srv

}  // namespace tic_tac_toe_msgs

#endif  // TIC_TAC_TOE_MSGS__SRV__DETAIL__MOVE__STRUCT_HPP_
