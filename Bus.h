#ifndef BUS_H
#define BUS_H
#include <ctime>

class Bus : public Vehicle
{
    public:
        Bus(int sID);
        int getParkingDuration();
};

#endif // BUS_H
