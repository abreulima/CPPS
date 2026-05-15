#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::Zombie(std::string name) : name(name) {}

void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is out brains and was destroyed!" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}