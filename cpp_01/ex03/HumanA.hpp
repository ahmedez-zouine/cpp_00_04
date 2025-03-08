#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:

    std::string name;
    Weapon &_weapon ;

public:

    HumanA(std::string name, Weapon &weap);
    ~HumanA();
    void attack();
	Weapon &getWeapon(void) const;
	void	setWeapon(Weapon const & weap);
};

#endif