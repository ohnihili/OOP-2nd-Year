#include <iostream>
#include <string>
#include "Person.h"    

using namespace std;

PersonList deepCopyPersonList(PersonList pl)
{
    int n = pl.numPeople;

    PersonList deepPList;
    deepPList.people = new Person[n];
    
    for (int i=0;i<n;i++)
    {
        deepPList.people[i].age = pl.people->age;
        deepPList.people[i].name = pl.people->name;
    }

    return  deepPList;
}