#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

class Sub_node: public rclcpp::Node
{
    public:
        Sub_node():Node("Robot_news_station_Sub_Node")
        {
            subcriber_ = this->create_subscription<example_interfaces::msg::String>(
                "robot_news",10,
                std::bind(&Sub_node::callBackRobotNews,this,std::placeholders::_1));
            
            RCLCPP_INFO(this->get_logger(), "Subscriber has been started...");
        }

    private:
        void callBackRobotNews(const example_interfaces::msg::String::SharedPtr msg)
        {
            RCLCPP_INFO(this->get_logger(),"%s",msg->data.c_str());
        }

        rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subcriber_;

};


int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Sub_node>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}