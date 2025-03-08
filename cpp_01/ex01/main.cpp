#include "Zombie.hpp"

int main(void)
{
    int i = 0;
    Zombie *horde = zombieHorde(8, "Jim");

    for (i = 0; i < 8; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
}