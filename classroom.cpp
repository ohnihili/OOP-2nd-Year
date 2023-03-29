#include <iostream>
#include <string>
#include "student.h"

using namespace std;

class Classroom
{
    private:
        int size;
        Student* students;
    public:
        Classroom(){size=0;};
        Classroom(int setsize)
        {
            size=setsize;
            students = new Student[size];
        };
        ~Classroom()
        {
            delete [] students;
        };
};

int main()
{
    Classroom OOP2023(10);
}