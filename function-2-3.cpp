#include <iostream>

using namespace std;

bool is_array_palindrome(int integers[], int length)
{
    if (length <= 0)
    {
        return false;
    }

    int flag = 0;

    for (int i=0;i<(length/2);i++)
    {
        if (integers[i] != integers[(length-1)-i])
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        return true;
    } else if (flag == 1)
    {
        return false;
    }

    return 0;
}

int sum_integers(int integers[], int length)
{
    if (length <= 0)
    {
        return -1;
    }

    int sum = 0;

    for (int i=0;i<length;i++)
    {
        sum += integers[i];
    }

    return sum;
}

int palindrome_sum(int integers[], int length)
{
    if (length <= 0)
    {
        return -1;
    }

    if (is_array_palindrome(integers,length) == false)
    {
        return -2;
    }
    
    return sum_integers(integers,length);
}

