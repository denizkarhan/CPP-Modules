/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:13 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:40:13 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->setType("WrongAnimal");
	std::cout << "WrongAnimal:	Default Constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &temp)
{
	this->type = temp.getType();
	std::cout << "WrongAnimal:	Default Constructed" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal:	Deleted..." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &temp)
{
	this->type = temp.getType(); 
	std::cout << "WrongAnimal:	Assigned." << std::endl;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::setType(const std::string &type)
{
	this->type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal:	wrong animal sound!" << std::endl;
}
