#include "Harl.hpp"

void Harl::_debug(void)
{
    std::cout << "[ DEBUG ] you have some Error in your code need to [ DEBUG ]" ;
}

void Harl::_info(void)
{
    std::cout << "[ INFO ] you can use the vim [ INFO ]";
}

void Harl::_warning(void)
{
    std::cout << "[ WARNING ] [ WARNING ]";
}

void Harl::_error(void)
{
    std::cout << "[ ERROR ] [ ERROR ]  ";
}

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}

void Harl::complain(std::string level)
{

}