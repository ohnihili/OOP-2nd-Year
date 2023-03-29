#ifndef UNIT_H
#define UNIT_H

#include <iostream>

using namespace std;

class Unit
{
    private:
        int num_bedrooms;
        int value;
        double area;

    public:
        Unit();                                             
        Unit(int unit_val, int num_beds, double unit_size);

        int get_num_bedrooms(); 
        int get_value();  
        double get_area();              

};


#endif