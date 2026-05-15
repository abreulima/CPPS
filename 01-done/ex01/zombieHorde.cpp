#include "Zombie.hpp"

#include <string>
//#include <sstream>

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        /*
        std::ostringstream oss;
        oss << name << " (" << i << ")";
        horde[i].setName(oss.str());
        */
        
        horde[i].setName(name);
    }

    // Return horde[0] returns a Zombie
    // Return horde returns a Zombie*
    return horde;
};