#include "Weapon.hpp"

Weapon::Weapon()
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType() const
{
    return (this->type);
}
