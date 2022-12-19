/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:39:15 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/01 10:59:26 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor has been called" << std::endl;
	FragTrap::Hit_p = 100;
	ScavTrap::Energy_p = 50;
	FragTrap::Attack_d = 30;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	std::cout << "DiamondTrap name constructor has been called" << std::endl;
	this->_name = name;
	this->ClapTrap::name = name + "_clap_name";
	FragTrap::Hit_p = 100;
	ScavTrap::Energy_p = 50;
	FragTrap::Attack_d = 30;
	std::cout << "----" << std::endl;
	std::cout << this->Hit_p << std::endl;
	std::cout << this->Energy_p << std::endl;
	std::cout << this->Attack_d << std::endl;
	std::cout << "----" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &d)
{
	std::cout << "DiamondTrap copy constructor has been called" << std::endl;
	*this = d;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor has been called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &d)
{
	FragTrap::operator=(d);
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap whoAmI -> " << this->_name << std::endl;
}