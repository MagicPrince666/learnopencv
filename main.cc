#include <opencv2/opencv.hpp>

#include "spdlog/spdlog.h"
#include "spdlog/cfg/env.h"  // support for loading levels from the environment variable
#include "spdlog/fmt/ostr.h" // support for user defined types

int main()
{
    cv::Mat image = cv::imread("../test.jpg", cv::IMREAD_COLOR);
    if(image.empty()) {
        spdlog::error("file open error!!");
    }
    cv::imshow("test", image);
    cv::waitKey(0);
    return 0;

}
