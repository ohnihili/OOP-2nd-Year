#include <iostream>

using namespace std;

int is_identity(int array[10][10])
{
    int  flag = 1;

    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            if (array[i] == array[j])
            {
                if (array[i][j] != 1 && array[j][i] != 0)
                {
                    flag = 0;
                }
            }
        }
    }
    return flag;
}