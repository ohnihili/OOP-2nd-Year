#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        string name;
        int ID;
        double grade;
    public:
        // constructors
        // default
        Student()
        {
            name = "N/A";
            ID = 0;
            grade = 0.0;
        };

        // other
        Student(string s_name, int s_ID, double s_grade)
        {
            name = s_name;
            ID = s_ID;
            grade = s_grade;
        };

        // destructor
        // called when object leaves scope or is deleted with "delete"
        ~Student()
        {
            // just to see the destructor in action
            cout << "A Student object has been deleted" << endl;
        };

        // getters
        string get_name(){return name;};
        int get_ID(){return ID;};
        double get_grade(){return grade;};
        
        // setters
        void set_name(string n_name){name = n_name;};
        void set_ID(int n_ID){ID = n_ID;};
        void set_grade(double n_grade){grade = n_grade;};

};


#endif