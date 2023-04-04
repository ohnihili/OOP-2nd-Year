#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include "player.h"

using namespace std;

class Warrior: public Player
{
    private:
        string weapon;
    public:
        void swingWeapon(Player* opponent);
        void setWeapon(string sweapon);
        string getWeapon();
        Warrior(string name, int health, int damage, string weapon);
};



#endif 