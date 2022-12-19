/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:38:39 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/20 15:26:35 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap	a("Ahmet");

	std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.attack("Ahmet");
	std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.takeDamage(a.getAttackDamage());
	std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.beRepaired(5);
    std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.highFivesGuys();

	return (0);
}
