#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class Server_node : public rclcpp::Node
{
    private:
    rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr server_;

    void callBackAddTwoInts(const example_interfaces::srv::AddTwoInts::Request::SharedPtr request,
                            const example_interfaces::srv::AddTwoInts::Response::SharedPtr response)
    {
        response->sum = request->a + request->b; 
        RCLCPP_INFO(this->get_logger(), "%ld + %ld = %ld", request->a, request->b, response->sum);
    }

    public:
        Server_node():Node("Add_server")
        {
            server_ = this->create_service<example_interfaces::srv::AddTwoInts>(
                "add_two_ints",
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
