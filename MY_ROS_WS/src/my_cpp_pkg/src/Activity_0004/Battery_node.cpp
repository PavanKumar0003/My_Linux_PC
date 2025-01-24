#include<rclcpp/rclcpp.hpp>
#include"my_robot_interfaces/srv/set_led.hpp"

class cli_node: public rclcpp::Node
{
    private:
        // std::thread thread_1;
        std::vector<std::thread> threads_;
        rclcpp::TimerBase::SharedPtr timer_;
        int counter;
        
        void callback(void)
        {
            threads_.push_back(std::thread(std::bind(&cli_node::callThread, this, 3, false)));
        }

    public:
        cli_node():Node("Cli_oop_node")
        {
            //callAddTwoInts(1, 4);
            //thread_1 = std::thread(std::bind(&cli_node::callAddTwoInts, this, 1,2));
            // threads_.push_back(std::thread(std::bind(&cli_node::callAddTwoInts, this, 1,2)));
            // threads_.push_back(std::thread(std::bind(&cli_node::callAddTwoInts, this, 4,6)));
            // threads_.push_back(std::thread(std::bind(&cli_node::callAddTwoInts, this, 4,6)));

            timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&cli_node::callback, this));
        }

        /*New thread*/
        void callThread(int64_t lednum_, bool ledstate_)
        {
            counter++;
            /*2. Create a client*/
            auto client = this->create_client<my_robot_interfaces::srv::SetLed>("set_led");
            /*3. wait until service is up*/
            while(!client->wait_for_service(std::chrono::seconds(1)))
            {
                RCLCPP_WARN(this->get_logger(), "waiting for Server up..........");
            }

            /*
            step1: if the counter is 4(battery is full, led state [0,0,0]) and the reset counter after passing 4
            Step2: if the counter is (co) 10 (battery is )*/
            
            /*4.Create a Request obj to request result of the requested data */
            auto request = std::make_shared<my_robot_interfaces::srv::SetLed::Request>();
            if(counter >= 4 && counter <10)
            {
                request->lednumber = lednum_;
                request->state = true;
                RCLCPP_INFO(this->get_logger(), "4th sec lednumber:%ld[%d]", request->lednumber, request->state);
            }
            else if(counter == 10)
            {
                request->lednumber = lednum_;
                request->state = false;
                RCLCPP_INFO(this->get_logger(), "6th sec lednumber:%ld[%d]", request->lednumber, request->state);
                counter = 0;
            }
            else{
                request->lednumber = lednum_;
                request->state = ledstate_;
            }
            /*5. Send Request in async mode*/
            auto future = client->async_send_request(request);

            try{
                auto response = future.get(); 
                RCLCPP_INFO(this->get_logger(), "%d", response->success);

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