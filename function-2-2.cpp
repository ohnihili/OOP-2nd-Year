#include <iostream>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int num = 0;
    int power = 1;

    for (int i = 0; i < number_of_digits; i++)
    {
        num += binary_digits[(number_of_digits - 1) - i] * power;
        power *= 2;
    }

    return num;

}