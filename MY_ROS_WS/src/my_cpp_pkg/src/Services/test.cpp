#include<rclcpp/rclcpp.hpp>
#include<example_interfaces/srv/add_two_ints.hpp>

using std::placeholders::_1;
using std::placeholders::_2;

class Cli_class: public rclcpp::Node
{
    private:
    std::vector<std::thread> threads_;
        
    public:
        Cli_class():Node("Cli_Node")
        {
            /*1. Create Thread for callBack function*/
            threads_.push_back(std::thread(std::bind(&Cli_class::callBack, this,1,2)));
        }

        void callBack(int64_t a,int64_t b)
        {
            /*2.Create client*/
            auto client = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
            while(!client->wait_for_service(std::chrono::seconds(1)))
            {
                RCLCPP_WARN(this->get_logger(),"waiting for server to up...");
            }
            auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
            request->a = a;
            request->b = b;
            auto feature = client->async_send_request(request);
            try{
                auto response = feature.get();
                RCLCPP_INFO(this->get_logger(),"%ld + %ld = %ld",request->a,request->b,response->sum);
            }catch(std::exception &e){
                RCLCPP_ERROR(this->get_logger(),"Request error...");
            }
        }
       
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Cli_class>();
    rclcpp::spin(node);
    rclcpp::shutdown();
}