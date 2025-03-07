#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie me(name);
    me.announce();
}