/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:39:40 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/20 15:52:50 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	a("Ahmet");

	std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.attack("Temp");
	std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.takeDamage(30);
	std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.beRepaired(5);
	std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();

	return(0);
}
