/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:56 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:56 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_HPP
# define TEMP_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &tmp);
        Animal(std::string name);
        virtual ~Animal();
		Animal &operator=(Animal const &tmp);
		void		setType(std::string type);
        std::string	getType();
		virtual void	makeSound();
};


class Dog : public Animal
{
	public:
		Dog();
		void	makeSound();
};

class Cat : public Animal
{
	public:
		Cat();
		void	makeSound();
};

void	Dog::makeSound()
{
	std::cout << "hav hav!" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "miyav miyav!" << std::endl;
}

Dog::Dog()
{
	this->type = "Dog";
}

Cat::Cat()
{
	this->type = "Cat";
}

Animal::Animal()
{
}

Animal::Animal(Animal const &tmp)
{
    (*this) = tmp;
}

Animal::Animal(std::string name)
{
    this->type = name;
}

Animal::~Animal()
{
}

Animal &Animal::operator=(Animal const &tmp)
{
	this->type = tmp.type;
	return (*this);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

std::string	Animal::getType()
{
	return (this->type);
}

void	Animal::makeSound()
{
	std::cout << "Sound of animal!" << std::endl;
}

#endif
