#include <iostream>
extern void count_digits(int array[4][4]);

using namespace std;

int main()
{
    int testArray[4][4];

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            testArray[i][j] = i+j;
        }
    }

    // for (int i=0;i<4;i++)
    // {
    //     for (int j=0;j<4;j++)
    //     {
    //         cout << testArray[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    count_digits(testArray);

}