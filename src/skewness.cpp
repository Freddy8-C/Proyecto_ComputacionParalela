#include "skewness.h"
#include<bits/stdc++.h>
Skewness::Skewness()
{

}

/*float mean(float arr[], int n)
{

    float sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];
    return sum / n;
}

// Function to calculate standard
// deviation of data.
float standardDeviation(float arr[],
                        int n)
{
    float sum = 0;

    // find standard deviation
    // deviation of data.
    for (int i = 0; i < n; i++)
        sum = (arr[i] - mean(arr, n)) *
              (arr[i] - mean(arr, n));

    return sqrt(sum / n);
}

// Function to calculate skewness.
float skewness(float arr[], int n)
{
    // Find skewness using above formula
     Skewness *fns = new Skewness();
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum = (arr[i] - fns->mean(arr, n)) *
              (arr[i] - fns->mean(arr, n)) *
              (arr[i] - fns->mean(arr, n));
    return sum / (n * fns->standardDeviation(arr, n) *
                 fns->standardDeviation(arr, n) *
                 fns->standardDeviation(arr, n) *
                 fns->standardDeviation(arr, n));
}
*/
