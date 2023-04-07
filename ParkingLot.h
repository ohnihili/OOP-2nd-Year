#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"


class ParkingLot
{
    private:
        int maxVehicles;
        int curVehicles;
        Vehicle** vehicles;
    public:
        ParkingLot(int smax);
        ~ParkingLot();
        int getCount();
        void parkVehicle(Vehicle* vehicle);
        void unparkVehicle(int id);
};

#endif // PARKINGLOT_H
