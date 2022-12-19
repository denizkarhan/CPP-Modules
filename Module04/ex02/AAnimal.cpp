/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:26 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:26 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->setType("AAnimal");
	std::cout << "AAnimal:	Default Constructed" << std::endl;
}

AAnimal::AAnimal(const AAnimal &temp)
{
	*this = temp;
	std::cout << "AAnimal:	Copy Constructed" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal:	Deleted..." << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &temp)
{
	this->type = temp.getType();
	std::cout << "AAnimal:	Assigned copy constructed" << std::endl;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

void AAnimal::setType(const std::string &type)
{
	this->type = type;
}

void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal:	AAnimal sound" << std::endl;
}
