#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

extern PersonList deepCopyPersonList(PersonList pl);

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
    

    PersonList deepPList = deepCopyPersonList(pList);

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
        cout << "Name: " << deepPList.people[i].name << endl;
        cout << "Age: " << deepPList.people[i].age << endl;
    };

}