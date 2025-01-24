// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_errmessage
{
public:
  explicit Init_HardwareStatus_errmessage(::my_robot_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::HardwareStatus errmessage(::my_robot_interfaces::msg::HardwareStatus::_errmessage_type arg)
  {
    msg_.errmessage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_motorstatus
{
public:
  explicit Init_HardwareStatus_motorstatus(::my_robot_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_errmessage motorstatus(::my_robot_interfaces::msg::HardwareStatus::_motorstatus_type arg)
  {
    msg_.motorstatus = std::move(arg);
    return Init_HardwareStatus_errmessage(msg_);
  }

private:
  ::my_robot_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_temparature
{
public:
  Init_HardwareStatus_temparature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_motorstatus temparature(::my_robot_interfaces::msg::HardwareStatus::_temparature_type arg)
  {
    msg_.temparature = std::move(arg);
    return Init_HardwareStatus_motorstatus(msg_);
  }

private:
  ::my_robot_interfaces::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::HardwareStatus>()
{
  return my_robot_interfaces::msg::builder::Init_HardwareStatus_temparature();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
