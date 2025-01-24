/*
STEPS TO CREATE A PUBLISHER NODE
1. Init rclcpp;
2. Create a node with shared pointer of type class name of pub_node;
3. Use rclcpp spin function with node name to iterate the node again and again;
4. Use rclcpp shutdown to close all the resources allocated to the node and terminate the program;

Insid the publisher node:
2.1. create a class which inherits rclcpp Node properties
 */

#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"

class Pub_station : public rclcpp::Node
{
    public:
    Pub_station() : Node("ACT_Publisher_1_node")
    {
        this->declare_parameter("number_pub", 0);
        this->declare_parameter("pub_freq",1.0);
        num_ = this->get_parameter("number_pub").as_int();
        pubFreq_ = this->get_parameter("pub_freq").as_double();

        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number_topic", 10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds((int)(1000.0/pubFreq_)), 
                                         std::bind(&Pub_station::Pub_CallBack,this));
        RCLCPP_INFO(this->get_logger(),"Number publisher node is initialized..");
    }
   
    private:
    /*USER PV Variables*/
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int num_;
    double pubFreq_;
    
    /*USER PV Functions*/
    void Pub_CallBack()
    {
       auto msg = example_interfaces::msg::Int64();
       msg.data = num_;
       publisher_ -> publish(msg);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto Pub_node = std::make_shared<Pub_station>();
    rclcpp::spin(Pub_node);
    rclcpp::shutdown();
    return 0;
}