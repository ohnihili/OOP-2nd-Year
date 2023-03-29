#include <iostream>
#include "Unit.h"

using namespace std;

int main() 
{
    Unit no1;
    Unit no2(5000,4,100.5);

    cout << no1.get_area() << " | " << no1.get_value() << " | " << no1.get_num_bedrooms() << endl;
    cout << no2.get_area() << " | " << no2.get_value() << " | " << no2.get_num_bedrooms() << endl;

}