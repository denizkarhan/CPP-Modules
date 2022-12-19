/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:39:07 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/01 10:17:57 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->Hit_p = 10;
    this->Energy_p = 10;
    this->Attack_d = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
	this->name = name;
    this->Hit_p = 10;
    this->Energy_p = 10;
    this->Attack_d = 0;
}

ClapTrap::ClapTrap(const ClapTrap &temp)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    (*this) = temp;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

// Functions
void ClapTrap::attack(const std::string &target)
{
    if (this->Hit_p <= 0 || this->Energy_p <= 0)
		std::cout << "ClapTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_d << " points of damage!" << std::endl;
		this->Energy_p--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_p <= 0 || this->Energy_p <= 0)
		std::cout << "ClapTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage" << std::endl;
		this->Hit_p -= amount;	
		if (this->Hit_p <= 0)
			std::cout << "ClapTrap " << "OH NO!! " << this->name << ", you died..." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hit_p <= 0 || this->Energy_p <= 0)
		std::cout << "ClapTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " got " << amount << " of hit points" << std::endl;
		this->Energy_p--;
		this->Hit_p += amount;
	}
}

// Get and Set
std::string	    ClapTrap::getName()
{
	return (this->name);
}

void		    ClapTrap::setName(std::string &Name)
{
	this->name = Name;
}

unsigned int	ClapTrap::getAttackDamage()
{
	return (this->Attack_d);
}

void	        ClapTrap::setAttackDamage(unsigned int AttackDamage)
{
	this->Attack_d = AttackDamage;
}

unsigned int	ClapTrap::getHitpoints()
{
	return (this->Hit_p);
}

void		    ClapTrap::setHitpoints(unsigned int Hitpoints)
{
	this->Hit_p = Hitpoints;
}

unsigned int	ClapTrap::getEnergyPoints()
{
	return (this->Energy_p);
}

void		    ClapTrap::setEnergyPoints(unsigned int EnergyPoints)
{
	this->Energy_p = EnergyPoints;
}

// Operators
ClapTrap        &ClapTrap::operator=(ClapTrap const &temp)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &temp)
	{
        this->name = temp.name;
        this->Hit_p = temp.Hit_p;
        this->Energy_p = temp.Energy_p;
        this->Attack_d = temp.Attack_d;
    }
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
	stream << " Name: " << clapTrap.getName() << std::endl << " Hitpoints: " << clapTrap.getHitpoints() << std::endl << \
	" Energy Points: " << clapTrap.getEnergyPoints() << std::endl << " Attack Damage: " << clapTrap.getAttackDamage() << std::endl;
	return (stream);
}
