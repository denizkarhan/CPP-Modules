/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:38:10 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/20 15:18:35 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->Hit_p = 100;
	this->Energy_p = 50;
	this->Attack_d = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->name = name;
	this->Hit_p = 100;
	this->Energy_p = 50;
	this->Attack_d = 20;
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
	std::cout << "ScavTrap copy ConstructoOr called" << std::endl;
	*this = s;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	ClapTrap::operator=(s);
	return(*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->Hit_p <= 0 || this->Energy_p <= 0)
		std::cout << "ScavTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_d << " points of damage!" << std::endl;
		this->Energy_p--;
	}
}

void ScavTrap::guardGate(void) const
{
		std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode."  << std::endl;
}
