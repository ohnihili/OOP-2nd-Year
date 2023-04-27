#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft
{
    protected:
        int weight;                  // the weight of AirCraft
        float fuel;                  // fuel percentage, initially 100%
        int numberOfFlights;         // initially 0

    public:
        AirCraft();
        AirCraft(int w);             // creates an Aircraft with weight w
        void refuel();               // Resets fuel back to 100%
        virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
        void set_weight(int weight);
        void set_fuel(float fuel);
        void set_numberOfFlights(int numberOfFlights);
        int get_weight();
        float get_fuel();
        int get_numberOfFlights();

};

#endif // AIRCRAFT_H
