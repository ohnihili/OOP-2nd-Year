#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person* createPersonArray(int n) 
{
    Person* personArray = new Person[n];
    
    for(int i=0;i<n;i++)
    {
        personArray.namename = "John Doe";
        personArray.age = 0;
    };


    return personArray;
}