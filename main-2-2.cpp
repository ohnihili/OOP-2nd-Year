#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

using namespace std;

int main()
{
    int binArr[5] = {1,1,0,0,0};
    int binArrSize = 5;

    cout << binary_to_int(binArr,binArrSize) << endl;

}