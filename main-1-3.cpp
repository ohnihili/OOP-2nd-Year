#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main()
{
    ParkingLot lot(10);

    for (int i = 1; i <= 5; i++)
    {
        Car* car = new Car(i);
        lot.parkVehicle(car);
    }

    for (int i = 6; i <= 8; i++)
    {
        Bus* bus = new Bus(i);
        lot.parkVehicle(bus);
    }

    for (int i = 9; i <= 10; i++)
    {
        Motorbike* bike = new Motorbike(i);
        lot.parkVehicle(bike);
    }

    int count = lot.countOverstayingVehicles(15);
    cout << "Number of overstaying vehicles: " << count << endl;

}