#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}
Zombie::Zombie(std::string name)
{
    this->_name = name;
}
Zombie::~Zombie(void)
{
    return ;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}