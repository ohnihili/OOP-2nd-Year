#include <iostream>
#include <string>
#include "Person.h"

extern Person* createPersonArray(int n);

using namespace std;

int main()
{
    int number = 5;

    Person *pArray = createPersonArray(number);

    for (int i=0;i<number;i++)
    {
        cout << "Name: " << pArray[i].name << endl;
        cout << "Age: " << pArray[i].age << endl;
    }
    delete[] pArray; 
}