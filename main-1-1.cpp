#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {

    int numVehicles;

    cout << "Enter the number of vehicles: ";
    cin >> numVehicles;

    Vehicle** vehicles = new Vehicle*[numVehicles];

    for (int i = 0; i < numVehicles; i++) {
        int id = i + 1;
        int type;
        cout << "Enter type of vehicle: 1=car, 2=bus, 3=bike" << id << ": ";
        cin >> type;
        switch (type) {
            case 1:
                vehicles[i] = new Car(id);
                break;
            case 2:
                vehicles[i] = new Bus(id);
                break;
            case 3:
                vehicles[i] = new Motorbike(id);
                break;
            default:
                cerr << "Invalid vehicle type!" << endl;
                i--;
                break;
        }
    }

    for (int i = 0; i < numVehicles; i++) {
        cout << "Vehicle ID: " << vehicles[i]->getID() << ", Parking Duration: " << vehicles[i]->getParkingDuration() << " seconds" << std::endl;
    }

    for (int i = 0; i < numVehicles; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;

    return 0;
}