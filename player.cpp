#include <iostream>
#include <string>
#include "player.h"

using namespace std;

Player::Player(string sname, int shealth, int sdamage)
{
    name = sname;
    health = shealth;
    damage = sdamage;
};

void Player::attack(Player* opponent, int damage)
{
    opponent->health = opponent->health - damage;
};

void Player::takeDamage(int damage)
{
    health = health - damage;
    cout << name << " takes " << damage 
    << " damage. Remaining health: " << health << "\n";
};

void Player::setName(string sname)
{
    name = sname;
};
void Player::setHealth(int shealth)
{
    health = shealth;
};
void Player::setDamage(int sdamage)
{
    damage = sdamage;
};
string Player::getName()
{
    return name;
};
int Player::getHealth()
{
    return health;
};
int Player::getDamage()
{
    return damage;
};

