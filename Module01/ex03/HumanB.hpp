#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon  *typeB;
public:
    HumanB(Weapon &WeaponB);
    HumanB(std::string name);
	void	setWeapon(Weapon &Weapon);
    void    attack();
};

#endif
