/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:35 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:40:35 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->setType("Animal");
	std::cout << "Animal:		Default Constructed" << std::endl;
}

Animal::Animal(const Animal &temp)
{
	*this = temp;
	std::cout << "Animal:		Copy Constructed" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal:		Deleted..." << std::endl;
}

Animal	&Animal::operator=(const Animal &temp)
{
	this->type = temp.getType();
	std::cout << "Animal:		Assigned copy constructed" << std::endl;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::setType(const std::string &type)
{
	this->type = type;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal:		Animal sound" << std::endl;
}
