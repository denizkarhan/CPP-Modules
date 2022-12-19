/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:23 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:40:23 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->setType("WrongCat");
	std::cout << "WrongCat:	Default Constructed" << std::endl;
}

WrongCat::WrongCat(WrongCat const &temp) : WrongAnimal(temp)
{
	*this = temp;
	std::cout << "WrongCat:	Copy Constructed" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat:	Deleted..." << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &temp)
{
	this->type = temp.getType();
	std::cout << "WrongCat:	Assigned copy constructed" << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat:	wrong cat sound!" << std::endl;
}
