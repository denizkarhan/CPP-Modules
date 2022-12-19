/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:20:44 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/13 14:20:44 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main( void ) 
{
	Span sp (10);

	sp.addNumber(6);


	// std::cout << sp << std::endl;

	std::cout << "Minimum value range: " << sp.shortestSpan() << std::endl;
	std::cout << "Maximum value range: " << sp.longestSpan() << std::endl;

	return 0; 
}
