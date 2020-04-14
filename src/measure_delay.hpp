#include <ros/ros.h>
#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>

namespace measure_delay_nodelet
{
    class MeasureDelay : public nodelet::Nodelet
    {
        virtual void onInit();
    };
}
