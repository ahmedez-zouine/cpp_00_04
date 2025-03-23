#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}
Zombie::~Zombie()
{
    return ;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce() const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}