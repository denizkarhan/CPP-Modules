#include "HumanB.hpp"

HumanB::HumanB(Weapon &WeaponB)
{
    this->typeB = &WeaponB;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->typeB = &Weapon;
}

void    HumanB::attack()
{
    std::cout << this->name << "attacks with their" << this->typeB->getType() << std::endl;
}
