#include <iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

using namespace std;

int main()
{
    int binArray[10] = {1,0,0,0,1,1,0,0,1,0};
    int num = 10;

    cout << bin_to_int(binArray,num) << endl;
    

}
