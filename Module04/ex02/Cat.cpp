/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:41 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:41 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	this->setType("Cat");
	std::cout << "Cat:		Default Constructed" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const &temp) : AAnimal(temp)
{
	*this = temp;
	std::cout << "Cat:		Copy Constructed" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat:		Deleted..." << std::endl;
}

Cat &Cat::operator=(Cat const &temp)
{
	this->type = temp.getType();
	std::cout << "Cat:		Assigned copy constructed" << std::endl;
	this->brain = new Brain(*temp.brain);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat:		Meow Meow" << std::endl;
}
