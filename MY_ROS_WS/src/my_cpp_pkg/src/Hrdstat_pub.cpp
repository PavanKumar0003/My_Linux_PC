#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/msg/hardware_status.hpp"

class Robot_news_Station:public rclcpp::Node
{
    public:
        Robot_news_Station():Node("Robot_news_station_PubNode"),Robot_name_("NOV_24.0")
        {
            /*Pub-1 initialization */
            publisher_ = this->create_publisher<my_robot_interfaces::msg::HardwareStatus>("robot_news",10);
            timer_ = this->create_wall_timer(std::chrono::milliseconds(500),
                                            std::bind(&Robot_news_Station::publishNews,this));
            RCLCPP_INFO(this->get_logger(), "Robot New station has been started..");
        }

    private:
    /*Function to publish data onto the topic*/
    void publishNews()
    {
        auto msg = my_robot_interfaces::msg::HardwareStatus();
        msg.temparature = 69;
        msg.motorstatus = true;
        msg.errmessage = "Motors are too hot !!";
        publisher_->publish(msg);
    }

    /*USER_VARIABLES_PV*/
    /*Declaring publisher of type "example_interface/msg/String" using a shared pointer*/
    rclcpp::Publisher<my_robot_interfaces::msg::HardwareStatus>::SharedPtr publisher_;
    std::string Robot_name_;    /*Declare robot name*/
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);
    auto node_1 = std::make_shared<Robot_news_Station>();
    rclcpp::spin(node_1);
    rclcpp::shutdown();
    return 0;
}