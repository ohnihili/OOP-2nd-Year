#include "AirCraft.h"
#include "Airplane.h"
#include <string.h>

using namespace std;

Airplane::Airplane(){};
Airplane::Airplane(int w, int p)
{
    weight = w;
    numPassengers = p;
    fuel = 100;
    numberOfFlights = 0;

}     
void Airplane::fly(int headwind, int minutes)
{
     if (headwind >= 40 && this->weight > 5670)
    {
        fuel = fuel - (0.4*minutes) - (0.01*(weight-5670)*minutes);
        if(fuel < 20)
        {
            return;
        };
        numberOfFlights++;
    } else if (headwind >= 40 &! this->weight > 5670)
    {
        fuel = fuel - (0.4*minutes);
        if(fuel < 20)
        {
            return;
        };
        numberOfFlights++;
    } else if (this->weight > 5670 &! headwind >= 40)
    {
        fuel = fuel - (0.2*minutes) - (0.01*(weight-5670)*minutes);
        if(fuel < 20)
        {
            return;
        };
        numberOfFlights++;
    } else 
    {
        fuel = fuel - (0.2*minutes);
        if(fuel < 20)
        {
            return;
        };
        numberOfFlights++;
    };
}
void Airplane::reducePassengers(int x)
{
    numPassengers = numPassengers - x;

    if (numPassengers < 0)
    {
        numPassengers = 0;
    };
}
int Airplane::get_numPassengers()
{
    return numPassengers;
}