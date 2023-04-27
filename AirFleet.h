#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet
{
    protected:
        AirCraft **fleet;
    public:
        AirFleet();                           
        AirCraft **get_fleet();   
};

#endif // AIRFLEET_H
