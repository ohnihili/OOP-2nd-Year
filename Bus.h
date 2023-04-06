#ifndef BUS_H
#define BUS_H
#include <ctime>
#include "Vehicle.h"

class Bus : public Vehicle
{
    public:
        Bus(int sID);
        int getParkingDuration();
};

#endif // BUS_H
