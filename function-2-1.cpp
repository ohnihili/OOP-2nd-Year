#include <iostream>
#include <string>

using namespace std;

void print_binary_str(std::string decimal_number)
{
    int decNum = stoi(decimal_number);
    int remainder;
    int binaryNum = 0;
    int product = 1;

    while (decNum != 0) 
    {
        remainder = decNum % 2;
        binaryNum = binaryNum + (remainder * product);
        decNum = decNum / 2;
        product *= 10;
    }

    cout << binaryNum << endl;
}