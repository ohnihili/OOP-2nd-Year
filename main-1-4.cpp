#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);

int main()
{
    int number = 5;

    PersonList pList;

    pList.numPeople = number;

    for(int i=0;i<number;i++)
    {
        pList.people[i].age = 1;
        pList.people[i].name = "Ben and Abby";
    };
    

    PersonList shallowPList = shallowCopyPersonList(pList);

    for (int i=0;i<number;i++)
    {
        cout << "Person" << i+1 << ": " << endl;
        cout << "Name: " << pList.people[i].name << endl;
        cout << "Age: " << pList.people[i].age << endl;
    };

    cout << endl;

    for (int i=0;i<number;i++)
    {
        cout << "Person" << i+1 << ": " << endl;
        cout << "Name: " << shallowPList.people[i].name << endl;
        cout << "Age: " << shallowPList.people[i].age << endl;
    };

}