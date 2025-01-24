#include<rclcpp/rclcpp.hpp>
#include"example_interfaces/srv/add_two_ints.hpp"

class cli_node: public rclcpp::Node
{
    private:
        // std::thread thread_1;
        std::vector<std::thread> threads_;
    public:
        cli_node():Node("Cli_oop_node")
        {
            //callAddTwoInts(1, 4);
             threads_.push_back(std::thread(std::bind(&cli_node::callAddTwoInts, this, 1,2)));
             threads_.push_back(std::thread(std::bind(&cli_node::callAddTwoInts, this, 4,6)));
             threads_.push_back(std::thread(std::bind(&cli_node::callAddTwoInts, this, 4,6)));
        }

        /*New thread*/
        void callAddTwoInts(int64_t a, int64_t b)
        {
            /*2. Create a client*/
            auto client = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
            /*3. wait until service is up*/
            while(!client->wait_for_service(std::chrono::seconds(1)))
            {
                RCLCPP_WARN(this->get_logger(), "waiting for Server up..........");
            }
            /*4.Create a Request obj to request result of the requested data */
            auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
            request->a = a;
            request->b = b;
            /*5. Send Request in async mode*/
            auto future = client->async_send_request(request);

            try{
                auto response = future.get(); 
                RCLCPP_INFO(this->get_logger(), "%ld + %ld = %ld", a, b, response->sum);

            }catch(const std::exception &e){
                RCLCPP_ERROR(this->get_logger(), "Error while calling service...");
            }
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    /*1. Create rclcpp Node */
    auto node = std::make_shared<cli_node>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}