#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player 
{
    protected:
        string name;
        int health;
        int damage;
    public:
        Player(string sname, int shealth, int sdamage);
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);
        
        void setName(string sname);
        void setHealth(int shealth);
        void setDamage(int sdamage);

        string getName();
        int getHealth();
        int getDamage();
};

#endif 