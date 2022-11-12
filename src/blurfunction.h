#ifndef BLURFUNCTION_H
#define BLURFUNCTION_H
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
using namespace std;
using namespace cv;
class blurFunction
{
public:
    blurFunction();
    int blurfn(int MAX_KERNEL_LENGTH,int DELAY_BLUR,Mat src,Mat dst);
};

#endif // BLURFUNCTION_H
