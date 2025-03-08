#ifndef WEAPOM_HPP
#define WEAPOM_HPP

#include <iostream>

class Weapon
{

private:
    std::string type;

public:
    Weapon();
    ~Weapon();
    std::string getType()const ;
    void setType(std::string type);
};


#endif