/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:56 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:40:56 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->setType("Dog");
	std::cout << "Dog:		Default Constructed" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const &temp) : Animal(temp)
{
	*this = temp;
	std::cout << "Dog:		Copy Constructed" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog:		Deleted..." << std::endl;
}

Dog &Dog::operator=(Dog const &temp)
{
	this->type = temp.getType();
	std::cout << "Dog:		Assigned copy constructed" << std::endl;
	this->brain = new Brain(*temp.brain);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog:		Hav Hav" << std::endl;
}
