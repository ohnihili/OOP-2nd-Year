#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Effect.h"
#include "Character.h"
#include "Trap.h"
#include "Utils.h"
#include <vector>
#include <tuple>

class Game
{
    private:
        std::vector<Cell*> grid;

    public:
        std::vector<Cell*>& getGrid()
        {
            return grid;
        }

        std::vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight)
        {
            Character *charArray = new Character[numCharacters];
            for (int i = 0; i < numCharacters; i++) {
                charArray[i].setPos(std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight)), std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight)));
                grid.push_back(&charArray[i]);
            }

            Trap *trapArray = new Trap[numTraps];
            for (int i = 0; i < numTraps; i++) {
                trapArray[i].setPos(std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight)), std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight)));
                grid.push_back(&trapArray[i]);
            }

            return grid;
        }

        Game(int numCharacters, int numTraps, int gridWidth, int gridHeight)
        {
            initGame(numCharacters,numTraps,gridWidth,gridHeight);
        }

        void gameLoop(int maxIterations, double trapActivationDistance)
        {
            int currentIteration = 0;
            int numChars = 0;
            int numGrid = grid.size();
            while (currentIteration < maxIterations) 
            {
                for (int i = 0; i < numGrid; i++) 
                {
                    if (grid[i]->getType() == 'C') 
                    {
                        Character *charPtr = static_cast<Character *>(grid[i]);
                        charPtr->move(1, 0);
                        numChars++;
                    }
                }
                for (int i = 0; i < numGrid; i++) 
                {
                    if (grid[i]->getType() == 'C') 
                    {
                        for (int j = 0; j < numGrid; j++) 
                        {
                            if (grid[j]->getType() == 'T')
                            {
                                if (Utils::calculateDistance(grid[i]->getPos(), grid[j]->getPos()) < trapActivationDistance) 
                                {
                                    Trap *trapPtr = static_cast<Trap *>(grid[j]);
                                    trapPtr->apply(grid[i][j]);
                                    numChars--;
                                }
                            }
                        }
                    }
                }

                for (int i = 0; i < numGrid; i++) 
                {
                    if (grid[i]->getType() == 'C') 
                    {
                        if (std::get<1>(grid[i]->getPos()) > numGrid)
                        {
                            std::cout << "Character has won the game!" << std::endl;    
                            return;
                        }
                    }
                }

                currentIteration++;
            }
            
            if (currentIteration > maxIterations)
                {
                    std::cout << "Maximum number of iterations reached. Game over." << std::endl;
                    return;
                }
        }
};

#endif // GAME_H
