#include <iostream>
#include "AirCraft.h"

using namespace std;

int main()
{
    AirCraft plane(5000);
    plane.set_fuel(95.5);
    plane.set_numberOfFlights(5);

    cout << "Aircraft weight is: " << plane.get_weight() << " Fuel: " << plane.get_fuel() << " Flights: " << plane.get_numberOfFlights() << endl;

    plane.refuel();
    plane.fly(2,1);

    cout << "Fuel: " << plane.get_fuel() << endl;
    cout << "Flights: " << plane.get_numberOfFlights() << endl;



}