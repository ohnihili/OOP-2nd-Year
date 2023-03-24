#include <iostream>
#include <string>
#include "Person.h"

extern Person* createPersonArray(int n);

using namespace std;

int main()
{
    int number = 5;

    Person *pArray = createPersonArray(number);

    
}