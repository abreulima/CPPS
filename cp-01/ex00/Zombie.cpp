#include <iostream>

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is out brains and was destroyed!" << std::endl;
}