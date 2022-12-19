/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:39:31 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/20 15:42:17 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap 
{
    private:
    	std::string	_name;
    public:
    	DiamondTrap();
    	DiamondTrap(std::string const name);
    	DiamondTrap(DiamondTrap const &d);
    	virtual ~DiamondTrap();
    
    	DiamondTrap	&operator=(DiamondTrap const &d);
    
        void		attack(std::string const & target);
    	void		whoAmI(void);
};

#endif
