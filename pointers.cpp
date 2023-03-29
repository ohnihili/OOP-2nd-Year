#include <iostream>
#include <string>
#include "student.h"

using namespace std;

Student* studFact(string sname,int sID, double sgrade)
{
    Student* k = new Student(sname,sID,sgrade);

    return k;
};


int main()
{
    Student s1("Ben",1861126,0);

    Student* p;

    p = &s1;

    cout << "Printing address of s1: " << p << " | " << "Printing name in s1: " << p->get_name() << endl;

    Student* p2 = new Student();

    cout << "Name: " << p2->get_name() << endl;

    p2->set_name("Abby");

    cout << "Name: " << p2->get_name() << endl;

    Student* p3 = studFact("Abbe",78594,50.1);

    cout << "Name: " << p3->get_name() << endl;
    cout << "ID: " << p3->get_ID() << endl;
    cout << "Grade: " << p3->get_grade() << endl;

}