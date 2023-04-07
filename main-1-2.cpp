#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    // create a parking lot with capacity of 10
    ParkingLot parkingLot(10);

    // park vehicles until the lot is full
    while (parkingLot.getCount() < 10) {
        // prompt the user for the type of vehicle and ID
        std::string vehicleType;
        int vehicleId;
        std::cout << "Enter the type of vehicle to park (car/bus/motorbike): ";
        std::cin >> vehicleType;
        std::cout << "Enter the vehicle ID: ";
        std::cin >> vehicleId;

        // create a new vehicle of the specified type and ID
        Vehicle* vehicle = nullptr;
        if (vehicleType == "car") {
            vehicle = new Car(vehicleId);
        } else if (vehicleType == "bus") {
            vehicle = new Bus(vehicleId);
        } else if (vehicleType == "motorbike") {
            vehicle = new Motorbike(vehicleId);
        } else {
            std::cout << "Invalid vehicle type entered." << std::endl;
            continue;
        }

        // park the vehicle in the lot
        parkingLot.parkVehicle(vehicle);
        std::cout << "Vehicle parked." << std::endl;
    }

    // prompt the user for the ID of the vehicle to unpark
    int unparkId;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> unparkId;

    // remove the specified vehicle from the lot
    parkingLot.unparkVehicle(unparkId);

    return 0;
}