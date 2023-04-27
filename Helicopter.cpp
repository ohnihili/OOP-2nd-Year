#include "AirCraft.h"
#include "Helicopter.h"
#include <string.h>

using namespace std;

Helicopter::Helicopter(){}

Helicopter::Helicopter(int w, string n) 
{
    this->weight = w;
    this->name = n;
    fuel = 100;
    numberOfFlights = 0;
}
void Helicopter::fly(int headwind, int minutes)
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
void Helicopter::set_name(string name)
{
    this->name = name;
}
string Helicopter::get_name()
{
    return this->name;
}