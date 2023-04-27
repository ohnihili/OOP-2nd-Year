#include "AirCraft.h"

AirCraft::AirCraft(){}

AirCraft::AirCraft(int w)
{
    weight = w;
    numberOfFlights = 0;
    fuel = 100;
}         

void AirCraft::refuel()
{
    this->fuel = 100;
}               

void AirCraft::fly(int headwind, int minutes)
{
    this->numberOfFlights++;
}

void AirCraft::set_weight(int weight){this->weight = weight;}
void AirCraft::set_fuel(float fuel){this->fuel = fuel;}
void AirCraft::set_numberOfFlights(int numberOfFlights){this->numberOfFlights = numberOfFlights;}

int AirCraft::get_weight(){return this->weight;}
float AirCraft::get_fuel(){return this->fuel;}
int AirCraft::get_numberOfFlights(){return this->numberOfFlights;}