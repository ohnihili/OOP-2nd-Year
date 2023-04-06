#ifndef CAR_H
#define CAR_H
#include <ctime>
#include "Vehicle.h"

class Car : public Vehicle{
    public:
        Car(int sID);
        int getParkingDuration();
};

#endif // CAR_H
