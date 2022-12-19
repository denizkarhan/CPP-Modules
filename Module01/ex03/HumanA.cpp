#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << this->name << "attacks with their" << this->typeA->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &WeaponA)
{
    this->typeA = &WeaponA;
    this->name = name;
}
