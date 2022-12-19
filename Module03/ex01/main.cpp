/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:38:06 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/20 15:17:01 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	a("Person");

    std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.attack("Temp");
    std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.takeDamage(35);
    std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	a.beRepaired(7);
    std::cout << "Hit Point (" << a.getHitpoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

	return (0);
}
