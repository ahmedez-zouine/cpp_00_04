#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <iostream>

class Zombie
{
private:
    
    std::string _name;

public:

    Zombie(std::string);
    ~Zombie(void);
    void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
