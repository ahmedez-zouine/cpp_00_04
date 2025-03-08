#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::attack() const
{
    std::cout << HumanA::name << "attacks with their" << this->_weapon.getType() << std::endl;
}