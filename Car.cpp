#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car(int sID) : Vehicle(sID){};

int Car::getParkingDuration()
{
    time_t currentTime = time(nullptr);
    // double duration = difftime(currentTime, timeOfEntry);
    // return static_cast<int>(duration * 0.9);
    int duration = currentTime - timeOfEntry;
    return (duration*.9);
};
