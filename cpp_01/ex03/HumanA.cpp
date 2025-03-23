#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : _name(name), _weapon(weap) {}

HumanA::~HumanA(void) {
	return ;
}

void	HumanA::setWeapon(Weapon const &weap) {
	this->_weapon = weap;
}

Weapon &HumanA::getWeapon(void) const {
	return (this->_weapon);
}

void HumanA::attack(void) const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}