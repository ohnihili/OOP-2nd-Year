#include <iostream>

extern void print_matrix(int array[10][10]);

using namespace std;

int main()
{

    int array[10][10];

    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            array[i][j] = 1;
        }
    }

    print_matrix(array);
    
}
