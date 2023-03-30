#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H


#include <iostream>
#include "Unit.h"

class ApartmentBuilding
{
    private:
        int capacity;
        int num_current_units;
        Unit* current_units;

    public:
        ApartmentBuilding();
        ApartmentBuilding(int set_capacity);
        ~ApartmentBuilding();

        int get_capacity();
        int get_current_number_of_units();
        Unit* get_contents();
        bool add_unit(Unit unit);
};

#endif