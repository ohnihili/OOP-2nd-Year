#include <iostream>
#include <string>

extern void print_binary_str(std::string decimal_number);

using namespace std;

int main()
{
    string num = "6";

    print_binary_str(num);

}