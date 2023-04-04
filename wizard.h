#ifndef WIZARD_H
#define WIZARD_H

#include <string>
#include "player.h"

using namespace std;

class Wizard: public Player
{
    private:
        int mana;
    public:
        void castSpell(Player* opponent);
        void setMana(int smana);
        int getMana();
        Wizard(string name, int health, int damage, int mana);
};


#endif 