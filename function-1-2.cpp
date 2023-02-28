#include <iostream>
using namespace std;

double array_mean(int array[], int n) 
{
    double array_total = 0;
    double array_mean = 0;

    if (n < 1) 
    {
        return 0.0;
    }  

    for (int i=0; i<n; i++) 
    {
        array_total = array_total + array[i];
    }
    array_mean = array_total / n;

return array_mean;
}

