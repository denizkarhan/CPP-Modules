/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:39:12 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/20 15:24:33 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int Hit_p;
        unsigned int Energy_p;
        unsigned int Attack_d;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &temp);
        virtual ~ClapTrap();

        ClapTrap &operator=(const ClapTrap &temp);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string	    getName();
        void		    setName(std::string &Name);
        unsigned int	getAttackDamage();
        void	        setAttackDamage(unsigned int AttackDamage);
        unsigned int    getHitpoints();
        void		    setHitpoints(unsigned int Hitpoints);
        unsigned int	getEnergyPoints();
        void		    setEnergyPoints(unsigned int EnergyPoints);
};

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap);

#endif
