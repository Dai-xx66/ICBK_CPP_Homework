#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    cv::Mat img = cv::imread("../opencv_homework/test.jpg");
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

    std::vector<std::vector<cv::Point>> contours;
    cv::Mat contourInput =binary.clone();
    cv::findContours(contourInput, contours,cv::RETR_EXTERNAL,cv::CHAIN_APPROX_SIMPLE );
    cout<<"轮廓数量："<<contours.size()<<endl;
    cv::Mat contourImage = img.clone();
    cv::drawContours(contourImage, contours, -1, cv::Scalar(0,255,0),2);
    cv::imshow("counters",contourImage);

    cv::Mat blurred;
    cv::GaussianBlur(gray, blurred, cv::Size(5,5), 0);
    cv::imshow("Binary", binary);
    cv::imshow("Blurred",blurred);
    cv::waitKey(0);
    return 0;
}