#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"


ApartmentBuilding::ApartmentBuilding()
{
    capacity = 10;
    num_current_units = 0;
    current_units = new Unit[10];
};
ApartmentBuilding::ApartmentBuilding(int set_capacity)
{
    capacity = set_capacity;
    num_current_units = 0;
    current_units = new Unit[capacity];
};

ApartmentBuilding::~ApartmentBuilding()
{
    delete [] current_units;
    cout << "unit was deleted" << endl;
};

int ApartmentBuilding::get_capacity(){return capacity;};
int ApartmentBuilding::get_current_number_of_units(){return num_current_units;};

Unit* ApartmentBuilding::get_contents()
{
    return current_units;
};

bool ApartmentBuilding::add_unit(Unit unit)
{
    if (num_current_units < capacity)
    {
        current_units[num_current_units] = unit;
        num_current_units++;
        return true;
    } else 
    {
        return false;
    }
};
