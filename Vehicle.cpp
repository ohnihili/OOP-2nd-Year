#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(int sID)
{
    ID = sID; 
    timeOfEntry=time(nullptr);
};

int Vehicle::getID()
{
    return ID;
};
