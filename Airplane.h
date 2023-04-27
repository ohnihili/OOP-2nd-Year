#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirCraft.h"
#include <string>

using namespace std;

class Airplane : public AirCraft
{
    private:
        int numPassengers; 
    public:
        Airplane();
        Airplane(int w, int p);     // creates a plane with weight w and name n
        void fly(int headwind, int minutes);
        void reducePassengers(int x);     // reduce passenger list by x
        int get_numPassengers();
};


#endif // AIRPLANE_H


