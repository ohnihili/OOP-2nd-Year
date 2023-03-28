#include "Orchestra.h"
#include "Musician.h"
#include <string>

// constructors
Orchestra::Orchestra()
{
    size = 0;
};

Orchestra::Orchestra(int s_size)
{
    size = s_size;
    members = new Musician[size];
    currentlyPlaying = 0;
};

// methods
int Orchestra::get_current_number_of_members()
{
    return currentlyPlaying;
};


bool Orchestra::has_instrument(std::string instrument)
{
    for (int i=0;i<currentlyPlaying;i++)
    {
        if (members[i].get_instrument() == instrument)
        {
            return true;
        }
    }
    return false;
};

Musician* Orchestra::get_members()
{
    return members;
};

bool Orchestra::add_musician(Musician new_musician)
{
    if (currentlyPlaying < size)
    {
        members[currentlyPlaying] = new_musician;
        currentlyPlaying++;
        return true;
    }
    return false;
};

Orchestra::~Orchestra()
{
    delete[] members;
};