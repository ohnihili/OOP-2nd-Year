#include <iostream>
using namespace std;

int array_sum(int array[], int n) 
{
    int array_total = 0;
    
    if (n < 1) 
    {
        return 0;
    }  

    for (int i=0; i<n; i++) 
    {
        array_total = array_total + array[i];
    }
    return array_total;
}

