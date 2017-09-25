#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main ()
{
    Mat src=imread("/home/thomas/opencv_workspace/test1/cm.jpg");
	imshow("src",src);
    waitKey();
    return 0;
}
