#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n) 
{
    int array_total_1 = 0;
    int array_total_2 = 0;
    int array_sum = 0;
    
    if (n < 1) 
    {
        return 0;
    }  

    for (int i=0;i<n;i++)
    {
        array_total_1 = array_total_1 + array[i];
        array_total_2 = array_total_2 + secondarray[i];        
    }

    array_sum = array_total_1 + array_total_2;

return array_sum;
}

