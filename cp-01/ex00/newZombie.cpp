#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    if (name.empty())
        return NULL;

    Zombie *z = new Zombie(name);
    return z;
}

