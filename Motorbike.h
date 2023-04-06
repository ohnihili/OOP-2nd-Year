#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <ctime>

class Motorbike : public Vehicle
{
    public:
        Motorbike(int sID);
        int getParkingDuration();
};

#endif // MOTORBIKE_H
