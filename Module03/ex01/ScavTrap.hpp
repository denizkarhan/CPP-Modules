/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:38:12 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/20 15:16:27 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CPP
# define SCAVTRAP_CPP

#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void attack(const std::string &target);
		void guardGate(void) const;

		ScavTrap &operator=(const ScavTrap &s);

		ScavTrap(void);
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &s);
		virtual ~ScavTrap(void);
};

#endif
