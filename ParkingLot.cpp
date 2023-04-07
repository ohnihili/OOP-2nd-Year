#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

using namespace std;

ParkingLot::ParkingLot(int smax)
{
    maxVehicles = smax;
    curVehicles = 0;
    vehicles = new Vehicle*[maxVehicles]();
};

ParkingLot::~ParkingLot()
{
    for (int i = 0; i < maxVehicles; i++) 
        {
            if (vehicles[i] != nullptr) 
            {
                delete vehicles[i];
            }
        }
    delete[] vehicles;
};

int ParkingLot::getCount(){return curVehicles;};
void ParkingLot::parkVehicle(Vehicle* vehicle)
{
    if (curVehicles<maxVehicles)
    {
        vehicles[curVehicles] = vehicle;
        curVehicles++;
    } else 
    {
        cout << "The lot is full" << endl;
    }
};

void ParkingLot::unparkVehicle(int id)
{
    int index = -1;

    for (int i = 0; i < curVehicles; i++)
    {
        if (vehicles[i]->getID() == id)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "Vehicle not in the lot" << endl;
    } else 
    {
        delete vehicles[index];
        vehicles[index] = nullptr;
        for (int i = index+1; i < curVehicles; i++)
        {
            vehicles[i-1] = vehicles[i];
        }
    
        curVehicles--;
    }
};
