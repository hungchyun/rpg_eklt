//
// Created by hcchou on 2020-06-12.
//

#ifndef EKLT_INTERFACE_H
#define EKLT_INTERFACE_H


#include <gflags/gflags.h>
#include <opencv2/highgui.hpp>
#include <ros/ros.h>

namespace interface {
    class Interface {
    public:
        Interface();
        ~Interface();
        void showImage(char* display_window_name, const cv::Mat& img);

    private:

    };
}


#endif //EKLT_INTERFACE_H
