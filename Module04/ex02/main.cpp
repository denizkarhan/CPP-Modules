/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:53 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:53 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
//#include "WrongCat.hpp"

int main()
{
    // const AAnimal *j = new AAnimal();
    AAnimal *D = new Dog();
    Dog D2;
    D->makeSound();
    D2.makeSound();
}
