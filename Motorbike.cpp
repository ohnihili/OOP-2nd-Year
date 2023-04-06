#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike(int sID) : Vehicle(sID){};

int Motorbike::getParkingDuration()
{
    time_t currentTime = time(nullptr);
    // double duration = difftime(currentTime, timeOfEntry);
    // return static_cast<int>(duration * 0.85);
    int duration = currentTime - timeOfEntry;
    return (duration*.85);
};
