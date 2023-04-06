#ifndef CAR_H
#define CAR_H
#include <ctime>

class Car : public Vehicle
{
    public:
        Car(int sID);
        int getParkingDuration();
};

#endif // CAR_H
