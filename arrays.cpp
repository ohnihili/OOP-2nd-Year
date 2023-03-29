#include <iostream>
#include <string>
#include "student.h"

using namespace std;

Student destTest()
{
    Student t1;
    return t1;
};


int main()
{
    Student* arr = new Student[5];

    // accessing data within an array of objects
    for (int i=0;i<5;i++)
    {
        cout << arr[i].get_name() << endl;
    };

    destTest();

    cout << endl;

    // Calls destructor for each element in array "arr"
    delete [] arr;

}