//
// Created by mini on 2017/5/8.
//

#include <opencv2/opencv.hpp>
#include "cvUniText.hpp"
#include <iostream>

int main() {
    cv::Mat img = cv::imread("/home/jiasibo/1.jpg");
    uni_text::UniText uniText("/usr/share/fonts/wqy-microhei/wqy-microhei.ttc", 80);
    cv::Point p(100, 100);
    cv::Scalar color(0,255,0);
    cv::Rect rect = uniText.PutText(img, "Hello, 哈哈哈哈哈嗝", p, color, false);
    std::cout << rect << std::endl;
    cv::imwrite("1.jpg", img);
    return 0;
}
