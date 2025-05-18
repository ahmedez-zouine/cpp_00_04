#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("First");

    clapTrap.attack("Black_Hole");
    clapTrap.beRepaired(30);
    clapTrap.attack("Black_Hole");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(30);
    clapTrap.takeDamage(60);
    clapTrap.attack("Black_Hole");

    ClapTrap cp_2;
    cp_2 = clapTrap;
    cp_2.attack("Black_Hole");
    return 0;
}