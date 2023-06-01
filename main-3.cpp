#include <iostream>
#include "Game.h"

using namespace std;

int main() {

    Game g1;

    g1.initGame(5,2,10,10);
    g1.gameLoop(3,1);

    return 0;
}