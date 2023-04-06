#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>

class Vehicle
{
    protected:
        time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int sID);
        int getID();
        virtual int getParkingDuration() = 0;
};


#endif