#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main()
{
    int number = 5;

    PersonList pList = createPersonList(number);

    for (int i=0;i<number;i++)
    {
        cout << "Person" << i+1 << ": " << endl;
        cout << "Name: " << pList.people[i].name << endl;
        cout << "Age: " << pList.people[i].age << endl;
    }

}