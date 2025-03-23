#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " is be destry" << std::endl;
}

void Zombie::announce() const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}