#include <iostream>
#include "AirCraft.h"

using namespace std;

int main()
{
    AirCraft plane(5000);
    plane.set_fuel(95.5);
    plane.set_numberOfFlights(5);
    plane.refuel();
    plane.fly(2,1);
}