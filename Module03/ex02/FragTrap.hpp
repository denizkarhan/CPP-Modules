/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:38:33 by dkarhan           #+#    #+#             */
/*   Updated: 2022/11/01 10:34:40 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

#include <string.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		void attack(const std::string &target);
		void highFivesGuys(void) const;
	
		FragTrap &operator=(const FragTrap &s);
	
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &s);
		virtual ~FragTrap(void);
};

#endif
