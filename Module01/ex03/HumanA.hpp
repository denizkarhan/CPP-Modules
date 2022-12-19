#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon *typeA;
public:
    HumanA(std::string name, Weapon &WeaponA);
    void    attack();
};

#endif
