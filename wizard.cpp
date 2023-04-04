#include <iostream>
#include <string>
#include "player.h"
#include "wizard.h"

using namespace std;

void Wizard::castSpell(Player* opponent)
{
    cout << name << " casts a spell on " << opponent->getName() 
    << " for " << damage << " damage.\n";  

    attack(opponent, mana);
    
};
void Wizard::setMana(int smana)
{
    mana = smana;
};
int Wizard::getMana()
{
    return mana;
};

Wizard::Wizard(string sname, int shealth, int sdamage, int smana) : Player(sname,shealth,sdamage)
{
    mana = smana;
};


