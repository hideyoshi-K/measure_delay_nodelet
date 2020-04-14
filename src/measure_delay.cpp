#include "measure_delay.hpp"

namespace measure_delay_nodelet
{
    void MeasureDelay::onInit()
    {
        NODELET_INFO("Measurer Init");
    }
}

PLUGINLIB_EXPORT_CLASS(measure_delay_nodelet::MeasureDelay, nodelet::Nodelet);
