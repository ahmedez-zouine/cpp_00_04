#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : name(name), _weapon(weap) {}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack()
{
    std::cout << HumanA::name << "attacks with their" << this->_weapon.getType() << std::endl;
}

Weapon &HumanA::getWeapon(void) const
{
    return (this->_weapon);
}

void HumanA::setWeapon(Weapon const &weap)
{
    this->_weapon = weap;
}
