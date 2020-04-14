#include "send_image.hpp"

namespace measure_delay_nodelet
{
    void SendImage::onInit()
    {
        NODELET_INFO("Sender Init");
    }
}

PLUGINLIB_EXPORT_CLASS(measure_delay_nodelet::SendImage, nodelet::Nodelet);
