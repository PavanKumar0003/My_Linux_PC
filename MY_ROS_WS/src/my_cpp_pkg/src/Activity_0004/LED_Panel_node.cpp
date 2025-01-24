#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/msg/led_states.hpp"
#include "my_robot_interfaces/srv/set_led.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class Server_node : public rclcpp::Node
{
    private:
    int64_t LED[3];
    rclcpp::Service<my_robot_interfaces::srv::SetLed>::SharedPtr server_;

    void callBackAddTwoInts(const my_robot_interfaces::srv::SetLed::Request::SharedPtr request,
                            const my_robot_interfaces::srv::SetLed::Response::SharedPtr response)
    {
        if(request->lednumber == 0)
        {
            (request->state == true) ? LED[0] = 1 : LED[0] = 0;
            response->success = true;
        }
        else if(request->lednumber == 2)
        {
            (request->state == true) ? LED[1] = 1 : LED[1] = 0;
            response->success = true;
        }
        else if(request->lednumber == 3)
        {
            (request->state == true) ? LED[2] = 1 : LED[2] = 0;
            response->success = true;
        }
        RCLCPP_INFO(this->get_logger(), "LED Number:%ld state:[%ld,%ld,%ld]", request->lednumber, LED[0],LED[1],LED[2]);
    }

    public:
        Server_node():Node("Add_server")
        {
            server_ = this->create_service<my_robot_interfaces::srv::SetLed>(
                "set_led",
                std::bind(&Server_node::callBackAddTwoInts, this,_1,_2)
                );
            RCLCPP_INFO(this->get_logger(), "Service Server has been started...");
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Server_node>();
    rclcpp::spin(node);
    rclcpp::shutdown();
}
