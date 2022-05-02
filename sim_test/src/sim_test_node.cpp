    #include<ros/ros.h>
    int main(int argc, char** argv)
    {
        ros::init(argc, argv, "sim_test_node"); 
        ros::NodeHandle nh;
        //....   Node Function lists
        //....
        ros::spin();//  Response queue used to trigger topic and service
        return 0;
    }