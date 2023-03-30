#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"

using namespace std;

int main() 
{
    ApartmentBuilding no1;
    ApartmentBuilding no2(10);
    Unit u1;

    cout << no1.get_capacity() << endl;
    cout << no2.get_capacity() << endl;

    cout << no1.get_current_number_of_units() << endl;
    cout << no2.get_current_number_of_units() << endl;

    no1.add_unit(u1);
    no2.add_unit(u1);

    Unit* units = no1.get_contents();

}