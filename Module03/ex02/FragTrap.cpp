/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:38:30 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/01 10:29:17 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->Hit_p = 100;
	this->Energy_p = 100;
	this->Attack_d = 30;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->name = name;
	this->Hit_p = 100;
	this->Energy_p = 100;
	this->Attack_d = 30;
}

FragTrap::FragTrap(const FragTrap &s)
{
	std::cout << "FragTrap copy Constructor called" << std::endl;
	*this = s;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &s)
{
	ClapTrap::operator=(s);
	return(*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->Hit_p <= 0 || this->Energy_p <= 0)
		std::cout << "FragTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->Attack_d << " points of damage!" << std::endl;
		this->Energy_p--;
	}
}

void FragTrap::highFivesGuys(void) const
{
		std::cout << "FragTrap " << this->name << " HighFiveGuys called"  << std::endl;
}
