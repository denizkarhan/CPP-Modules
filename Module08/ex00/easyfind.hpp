/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:21:03 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/13 14:21:03 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <array>
# include <iostream>
# include <iomanip>

template<typename T>
int easyfind (T &container, int value)
{
	try
	{
		for (int x = 0 ; x < (sizeof(container)/(sizeof(container[0]))) ; x++)
			if (container[x] == value)
				return x;
		return -1;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return -2;
}

#endif
