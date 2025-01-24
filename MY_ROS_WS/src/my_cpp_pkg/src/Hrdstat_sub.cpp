#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/msg/hardware_status.hpp"

class Sub_node: public rclcpp::Node
{
    public:
        Sub_node():Node("Robot_news_station_Sub_Node")
        {
            subcriber_ = this->create_subscription<my_robot_interfaces::msg::HardwareStatus>(
                "robot_news",10,
                std::bind(&Sub_node::callBackRobotNews,this,std::placeholders::_1));
            
            RCLCPP_INFO(this->get_logger(), "Subscriber has been started...");
        }

    private:
        void callBackRobotNews(const my_robot_interfaces::msg::HardwareStatus::SharedPtr msg)
        {
            RCLCPP_INFO(this->get_logger(),"%ld %d %s",msg->temparature,msg->motorstatus,msg->errmessage.c_str());
        }

        rclcpp::Subscription<my_robot_interfaces::msg::HardwareStatus>::SharedPtr subcriber_;

};


int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Sub_node>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}