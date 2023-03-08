#include <iostream>

using namespace std;

int sum_diagonal(int array[4][4]);

int main()
{
    int inputArray[4][4];

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
           if ( inputArray[i] == inputArray[j])
            {
                inputArray[i][j] = 4;
            } else
            {
                inputArray[i][j] = 2;
            }
        }
    }

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
           cout << inputArray[i][j] << " ";
        }
        cout << endl;
    }

    cout << sum_diagonal(inputArray) << endl;

}