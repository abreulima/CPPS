#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie *z = newZombie("Leonan");
    z->announce();
    randomChump("Ivan");
    delete z;
}