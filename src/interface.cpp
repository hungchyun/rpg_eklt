//
// Created by hcchou on 2020-06-12.
//

#include "interface.h"

namespace interface
{
Interface::Interface() {

}

Interface::~Interface() {

}

void Interface::showImage(char* display_window_name, const cv::Mat& img)
{
    cv::namedWindow(display_window_name, cv::WINDOW_AUTOSIZE);
    cv::imshow(display_window_name, img);
    cv::waitKey(0);
}
}

