#ifndef MOMENT_H
#define MOMENT_H
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>
#include <iomanip>
using namespace cv;
using namespace std;

class Moment
{
public:
    Moment();
    void thresh_callback(int, void*, Mat src_gray,int thresh,RNG rng );
};

#endif // MOMENT_H
