#include <iostream>
#include <string>
#include "player.h"
#include "warrior.h"

using namespace std;

void Warrior::swingWeapon(Player* opponent)
{
    cout << name << " swings their " << weapon << " at " 
    << opponent->getName() << "!\n";

    attack(opponent, damage);

};
void Warrior::setWeapon(string sweapon)
{
    weapon = sweapon;
};
string Warrior::getWeapon()
{
    return weapon;
};

Warrior::Warrior(string name, int health, int damage, string sweapon) : Player(name,health,damage)
{
    weapon = sweapon;
};

