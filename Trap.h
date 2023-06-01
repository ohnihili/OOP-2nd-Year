#ifndef TRAP_H
#define TRAP_H

#include "Effect.h"

class Trap : public Effect, public Cell
{
    protected:
        bool active;
    public:
        Trap() : Cell(0, 0, 'T') {}
        Trap(int x, int y): Cell(x, y, 'T') {}
        bool isActive()
        {
            return active;
        }
        void apply(Cell& cell) {
        cell.setType('T');
        active = false;
        }
};

#endif // TRAP_H
