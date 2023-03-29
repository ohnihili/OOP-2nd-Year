#include <iostream>
#include "Unit.h"



Unit::Unit(){num_bedrooms=0;value=0;area=0.0;};                                             
Unit::Unit(int unit_val, int num_beds, double unit_size)
{

if (num_beds < 0)
    {
        num_bedrooms = 0;
    } else
    {
        num_bedrooms = num_beds; 
    };
    
    if (unit_val < 0)
    {
        value = 0;
    } else
    {
        value = unit_val;
    };

    if (unit_size < 0.0)
    {
        area = 0.0;
    } else
    {
        area = unit_size; 
    };
};

int Unit::get_num_bedrooms(){return num_bedrooms;};
int Unit::get_value(){return value;};
double Unit::get_area(){return area;};              
