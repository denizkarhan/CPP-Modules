/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:02 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:02 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define N 3

int main(void)
{
	// Test 1
	Animal *animals[N];

	for (int i = 0; i < N; i++)
		(i & 1) ? (animals[i] = new Dog()): (animals[i] = new Cat());

	for (int i = 0; i < N; i++)
		delete animals[i];

	// Test 2
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	return 0;
}
