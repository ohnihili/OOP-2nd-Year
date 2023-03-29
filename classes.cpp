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
            name = "";
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

        // getters
        string get_name(){return name;};
        int get_ID(){return ID;};
        double get_grade(){return grade;};
        
        // setters
        void set_name(string n_name){name = n_name;};
        void set_ID(int n_ID){ID = n_ID;};
        void set_grade(double n_grade){grade = n_grade;};

};


int main()
{
    Student s1("Abby",123456,99.95);

    cout << "Name: " << s1.get_name() << " | " << "ID: " << s1.get_ID() << " | " << "Grade: " << s1.get_grade() << endl;

    s1.set_name("Ben");
    s1.set_ID(1861126);
    s1.set_grade(85.95);

    cout << "Name: " << s1.get_name() << " | " << "ID: " << s1.get_ID() << " | " << "Grade: " << s1.get_grade() << endl;


}