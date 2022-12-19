/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:47 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:40:47 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class	Brain{
	protected:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain &obj);
		~Brain();

		Brain   &operator=(const Brain &obj);
		
        std::string *getIdeas() const;
};

#endif
