#include "Harl.hpp"

void Harl::_debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl ;
}

void Harl::_info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
    int         i = 0;
    mem_fun     is[4] = { &Harl::_debug , &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string logtype[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
       
    while (i < 4 && logtype[i].compare(level))
        i++;
    if (i == 4)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    else
        (this->*is[i])();
}