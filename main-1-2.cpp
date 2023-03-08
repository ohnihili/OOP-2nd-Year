#include <iostream>

using namespace std;

int is_identity(int array[10][10]);

int main()
{
    int inputArray[10][10];

    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
           if ( inputArray[i] == inputArray[j])
            {
                inputArray[i][j] = 1;
            } else
            {
                inputArray[i][j] = 0;
            }
        }
    }

    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
           cout << inputArray[i][j] << " ";
        }
        cout << endl;
    }

    cout << is_identity(inputArray) << endl;

}