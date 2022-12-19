/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:35 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:35 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain:		Brain created" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
}

Brain::~Brain()
{
	std::cout << "Brain:		Deleted..." << std::endl;
}

Brain	&Brain::operator=(const Brain &obj)
{
	std::string *ideas = obj.getIdeas();
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
	return (*this);
}

std::string	*Brain::getIdeas() const
{
	return ((std::string *)ideas);
}
