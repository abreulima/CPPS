#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump(std::string name)
{
    Zombie *z = newZombie(name);
    if (z)
        z->announce();
    delete z;
}
