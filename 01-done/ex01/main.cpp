#include "Zombie.hpp"

#include <iostream>

int main()
{
    int zombiesAmount = 5;
    Zombie *horde = zombieHorde(zombiesAmount, "Brain Burger");

    horde[0].announce();
    //Zombie first = horde[0];
    //first.announce();

    std::cout << std::endl;

    for (int i = 0; i < zombiesAmount; i++)
    {
        horde[i].announce();
    }

    std::cout << std::endl;

    delete[] horde;

    return 0;
}