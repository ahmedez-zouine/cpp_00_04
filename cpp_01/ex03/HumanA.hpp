#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:

    HumanA(std::string name, Weapon &weap);
    ~HumanA(void);

    void 	attack(void) const;
	Weapon &getWeapon(void) const;
	void	setWeapon(Weapon const & weap);

private:
    std::string _name;
    Weapon &_weapon ;

};

#endif
