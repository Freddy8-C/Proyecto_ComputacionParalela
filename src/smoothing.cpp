#include "smoothing.h"
//#include "blurfunction.h"
/*#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
using namespace std;
using namespace cv;
int DELAY_CAPTION = 1500;
int DELAY_BLUR = 100;
int MAX_KERNEL_LENGTH = 31;
Mat src; Mat dst;
char window_name[] = "Smoothing Demo";
int display_caption( const char* caption );
int display_dst( int delay );*/

Smoothing::Smoothing( )
{

}

/*int Smoothing::functionSmot(int argc, char ** argv){
    Smoothing *fns = new Smoothing();
    blurFunction *bfun = new blurFunction();
    namedWindow( window_name, WINDOW_AUTOSIZE );
    const char* filename = argc >=2 ? argv[1] : "lena.jpg";
    src = imread( samples::findFile( filename ), IMREAD_COLOR );
    if (src.empty())
    {
        printf(" Error opening image\n");
        printf(" Usage:\n %s [image_name-- default lena.jpg] \n", argv[0]);
        return EXIT_FAILURE;
    }
    if( fns->display_caption() != 0 )
    {
        return 0;
    }
    dst = src.clone();
    if( display_dst( DELAY_CAPTION ) != 0 )
    {
        return 0;
    }
    if( fns->display_caption() != 0 )
    {
        return 0;
    }

    bfun->blurfn(MAX_KERNEL_LENGTH,DELAY_BLUR,src,dst);


}*/

/*int display_caption()
{
    dst = Mat::zeros( src.size(), src.type() );
    putText( dst, "caption",
             Point( src.cols/4, src.rows/2),
             FONT_HERSHEY_COMPLEX, 1, Scalar(255, 255, 255) );
    return display_dst(DELAY_CAPTION);
}*/
/*int display_dst( int delay )
{
    imshow( window_name, dst );
    int c = waitKey ( delay );
    if( c >= 0 ) { return -1; }
    return 0;
}*/




