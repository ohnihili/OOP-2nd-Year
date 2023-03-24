#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person* createPersonArray(int n) 
{
    Person personArray[n];
    
    for(int i=0;i<n;i++)
    {
        personArray->name = "John Doe";
        personArray->age = 0;
    };


    return personArray;
}