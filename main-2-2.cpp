#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"
#include <string>

using namespace std;

int main()
{
    Airplane plane1(500,50);
    Airplane plane2(500,100);

    plane1.fly(0,500);
    cout << plane1.get_fuel() << endl;
}