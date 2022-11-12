using namespace std;
#include <iostream>
//#include <rootmeansquare.h>
#include <bits/stdc++.h>
// Function that Calculate Root Mean Square
float rmsValue(int arr[], int n)
{
    int square = 0;
    float mean = 0.0, root = 0.0;

    // Calculate square.
    for (int i = 0; i < n; i++) {
        square += pow(arr[i], 2);
    }

    // Calculate Mean.
    mean = (square / (float)(n));

    // Calculate Root.
    root = sqrt(mean);

    return root;
}


int main4()
{
    //RootMeanSquare *fnr = new RootMeanSquare();
    int arr[] = { 10, 4, 6, 8 };
        int n = sizeof(arr) / sizeof(arr[0]);
         cout << rmsValue(arr, n) << endl;
        //cout << fnr->rmsValue(arr, n) << endl;

        return 0;

}
