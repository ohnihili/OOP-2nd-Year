#include <iostream>
#include <string>
#include "Person.h"

extern Person* createPersonArray(int n);

using namespace std;

int main()
{
    int number = 5;

    Person *pArray = createPersonArray(number);

    for (int i=0;i<n;i++)
    {
        cout << "Person " << i << ":\n";
        cout << "Name: " << arr[i].name << "\n";
        cout << "Age: " << arr[i].age << "\n";
    }
    delete[] arr; 
    return 0;
}