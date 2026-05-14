#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
        Zombie(std::string name) : name(name) {};
        ~Zombie();
};

#endif