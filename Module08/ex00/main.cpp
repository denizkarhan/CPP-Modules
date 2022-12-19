/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:20:48 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/13 14:20:48 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::cout << " ---------- Test 1 ---------- " << std::endl;
    int test[5];
	std::string isim = "ahmet";

	std::cout << ::easyfind(isim, 'm') << std::endl;
	test[0] = 21;
	test[1] = 42;
	test[2] = 84;

	std::cout << "index of the (42) : " << ::easyfind(test , 42)<< std::endl;
	std::cout << "index of the (100) : " << ::easyfind(test , 100)<< std::endl << std::endl;

    // --------------------------------------------------------------------------

    std::cout << " ---------- Test 2 ---------- " << std::endl;
	std::vector<int> vector;

    vector.push_back(6);
	vector.push_back(5);
	vector.push_back(8);
	vector.push_back(4);
	vector.push_back(5);
	std::cout << "index of the (5) : " << ::easyfind(vector, 5) << std::endl << std::endl;

    // --------------------------------------------------------------------------

    std::cout << " ---------- Test 3 ---------- " << std::endl;
	std::array<int, 2> arr;

    arr[0] = 4;
	arr[1] = 2;

	std::cout << "index of the (10) : " << ::easyfind(arr, 10) << std::endl << std::endl;

    // --------------------------------------------------------------------------

    std::cout << " ---------- Test 4 ---------- " << std::endl;
	std::array<int, 2> arr2;

	arr2[0] = 4;
	arr2[1] = 2;
	std::cout << "index of the (4) : " << ::easyfind(arr2, 4) << std::endl << std::endl;
}
