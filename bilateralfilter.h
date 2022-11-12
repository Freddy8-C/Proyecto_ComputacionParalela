#ifndef BILATERALFILTER_H
#define BILATERALFILTER_H
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
using namespace std;
using namespace cv;

class bilateralFilter
{
public:
    bilateralFilter();
    int functionBilateral(int MAX_KERNEL_LENGTH,int DELAY_BLUR,Mat src,Mat dst);
};

#endif // BILATERALFILTER_H
