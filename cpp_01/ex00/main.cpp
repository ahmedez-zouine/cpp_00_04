#include "Zombie.hpp"

int main(void)
{
    Zombie one("Bob");
    Zombie two("Lee");
    Zombie *three = newZombie("Jon");

    two.announce();
    randomChump("Sam");
    one.announce();
    delete three;
}