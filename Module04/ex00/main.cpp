/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:05 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:40:05 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	// Test 1
	std::cout << "\t- Test 1 -" << std::endl;
	Animal *animal = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	std::cout << std::endl;
	std::cout << "Dog->getType	[" << dog->getType() << "]" << std::endl;
	std::cout << "Cat->getType	[" << cat->getType() << "]" << std::endl;

	std::cout << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;

	// Test 2
	std::cout << std::endl;
	std::cout << "\t- Test 2 -" << std::endl;
	const WrongAnimal *wrong_animal = new WrongAnimal();
	const WrongAnimal *wrong_cat = new WrongCat();

	std::cout << std::endl;
	wrong_animal->makeSound();
	wrong_cat->makeSound();

	std::cout << std::endl;
	delete wrong_animal;
	delete wrong_cat;
}
