/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:20:32 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/13 14:20:32 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> mstack;

	mstack.push(15);
	mstack.push(4);
	mstack.push(7);
	std::cout << "Top value: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.pop();
	std::cout << "Top value: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	std::cout << "------------------------------" << std::endl;
	mstack.push(1);
	mstack.push(20);
	mstack.push(3);

	MutantStack<int>::iterator it_b = mstack.begin();
	MutantStack<int>::iterator it_e = mstack.end();
	int	i = 0;

	while (it_b != it_e)
	{
		std::cout << "Value(" << ++i << "): " << *it_b << std::endl;
		++it_b;
	}

	std::cout << "------------------------------" << std::endl;
	MutantStack<int> s(mstack);
	MutantStack<int>::iterator it;
	i = 0;

	for (it = s.begin(); it != s.end(); it++)
		std::cout << "Value(" << ++i << "): " << *it << std::endl;


	return 0;
}
