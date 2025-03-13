#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    this->_weapon = NULL;
}

HumanB::~HumanB(void) {
    return ;
}

void HumanB::attack(void) const {
    if (!this->_weapon)
        std::cout << this->_name << " is unarmed" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

Weapon &HumanB::getWeapon(void) const {
	return (*this->_weapon);
}

void HumanB::setWeapon(Weapon &weap) {
    this->_weapon = &weap;
}

void HumanB::unsetWeapon(void) {
    this->_weapon = NULL;
}