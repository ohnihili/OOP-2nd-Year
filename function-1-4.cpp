#include <iostream>
#include <string>
#include "Person.h"    

using namespace std;

PersonList shallowCopyPersonList(PersonList pl)
{
    int n = pl.numPeople;

    PersonList shallowPList;
    shallowPList.people = pl.people;
    
    // for (int i=0;i<n;i++)
    // {
    //     deepPList.people[i].age = pl.people->age;
    //     deepPList.people[i].name = pl.people->name;
    // }

    return shallowPList;
}