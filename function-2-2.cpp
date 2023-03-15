#include <iostream>

using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits)
{
    int bin = 0;
    int pow = 1;

    for (int i=0;i<number_of_digits;i++)
    {
        bin += binary_digits[(number_of_digits-1)-i] * pow;
        pow *= 2;
    }

    return bin;
}