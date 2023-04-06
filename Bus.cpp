#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus(int sID) : Vehicle(sID){};

int Bus::getParkingDuration()
{
    time_t currentTime = time(nullptr);
    double duration = difftime(currentTime, timeOfEntry);
    return static_cast<int>(duration * 0.75);
};
