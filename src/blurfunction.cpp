#include "blurfunction.h"
#include <smoothing.h>

blurFunction::blurFunction()
{

}

/*int blurfn(int MAX_KERNEL_LENGTH,int DELAY_BLUR,Mat src,Mat dst){
    Smoothing *sfn = new Smoothing();
    for ( int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2 )
        {
            blur( src, dst, Size( i, i ), Point(-1,-1) );
            if( sfn->display_dst(DELAY_BLUR) != 0)
            {
                return 0;
            }
        }
    return 0;
}*/


