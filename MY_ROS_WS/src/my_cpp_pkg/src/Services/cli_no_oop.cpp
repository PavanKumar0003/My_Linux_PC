#include<rclcpp/rclcpp.hpp>
#include"example_interfaces/srv/add_two_ints.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    /*1. Create rclcpp Node */
    auto node = std::make_shared<rclcpp::Node>("cli_node_no_oop");
    /*2. Create a client*/
    auto client = node->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
    /*3. wait until service is up*/
    while(!client->wait_for_service(std::chrono::seconds(1)))
    {
        RCLCPP_WARN(node->get_logger(), "waiting for Server up..........");
    }
    /*4.Create a Request obj to request result of the requested data */
    auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    request->a = 3;
    request->b = 4;
    /*5. Send Request in async mode*/
    auto future = client->async_send_request(request);
    /*6. Spin Node until responce from the Server whether true or false*/
    if(rclcpp::spin_until_future_complete(node, future) == rclcpp::FutureReturnCode::SUCCESS)
        RCLCPP_INFO(node->get_logger(), "%ld + %ld = %ld", request->a, request->b, future.get()->sum);
    else
        RCLCPP_ERROR(node->get_logger(), "Error while calling service...");
    rclcpp::shutdown();
    return 0;
}