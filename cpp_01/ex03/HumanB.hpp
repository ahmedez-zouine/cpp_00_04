#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

public:

    HumanB(std::string name);
    ~HumanB(void);

    void attack(void) const;
	Weapon &getWeapon(void) const;
    void setWeapon(Weapon &weap);
    void unsetWeapon(void);

private:

    std::string _name;
    Weapon *_weapon;

};

#endif /* HUMANB_HPP */