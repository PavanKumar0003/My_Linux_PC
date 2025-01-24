#include"rclcpp/rclcpp.hpp"
#include"example_interfaces/msg/int64.hpp"
#include"example_interfaces/srv/set_bool.hpp"

using std::placeholders::_1;

class Sub_node:public rclcpp::Node
{
    private:
        rclcpp::Subscription<example_interfaces::msg::Int64>::SharedPtr subscriber_;
        rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
        rclcpp::Service<example_interfaces::srv::SetBool>::SharedPtr service_;
        rclcpp::TimerBase::SharedPtr timer_;
        int64_t Counter_, temp_;

        void Sub_Callback(example_interfaces::msg::Int64::SharedPtr msg)
        {
            Counter_ = msg->data;
            //temp_ = temp_ + Counter_;
            RCLCPP_INFO(this->get_logger(),"%ld", temp_);
        }
       
        void Pub_Callback()
        {
            auto msg = example_interfaces::msg::Int64();
            //msg.data = temp_+temp_;
            msg.data = Counter_;
            publisher_->publish(msg);
        }

        void Ser_Callback(const example_interfaces::srv::SetBool::Request::SharedPtr Request/*,
                            const example_interfaces::srv::SetBool::Request::SharedPtr Response*/)
        {
            if(Request->data == true)
            {
                temp_ = 0;
                RCLCPP_INFO(this->get_logger(),"Reset successful...");
            }else
                RCLCPP_INFO(this->get_logger(),"Reset unsuccessful...");
        }

    public:
        Sub_node():Node("Act_Subscriber_1")
        {
            subscriber_ = this->create_subscription<example_interfaces::msg::Int64>("number_topic",10,
                            std::bind(&Sub_node::Sub_Callback, this, std::placeholders::_1));    
            publisher_  = this->create_publisher<example_interfaces::msg::Int64>("number_count_topic",10);
            service_ = this->create_service<example_interfaces::srv::SetBool>(
                            "reset_number_counter",
                            std::bind(&Sub_node::Ser_Callback,this,_1)
                            );

            timer_  =  this->create_wall_timer(std::chrono::milliseconds(500),
                                                std::bind(&Sub_node::Pub_Callback,this));

            RCLCPP_INFO(this->get_logger(),"Number counter Started....");
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto SubNode = std::make_shared<Sub_node>();
    rclcpp::spin(SubNode);
    rclcpp::shutdown();
    return 0;
}

