#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;

int main(){
    cv::Mat img = cv::imread("test.jpg");
    if(img.empty()){
        cout << "读取失败" << endl;
        return -1;
    }
    cv::Mat gray;
    cv:: cvtColor(img,gray,cv::COLOR_BGR2GRAY);
    cv::imshow("original",img);
    cv::imshow("Gray",gray);
    cv::Mat binary;
    cv::threshold(gray, binary,127,255,cv::THRESH_BINARY);

    cv::Mat blurred;
    cv::GaussianBlur(binary, blurred, cv::Size(5,5), 0);
    cv::imshow("Binary", binary);
    cv::imshow("Blurred",blurred);
    cv::waitKey(0);
    return 0;
}