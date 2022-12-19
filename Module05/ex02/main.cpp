/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:29 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:29 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << std::endl << "Test 1" << std::endl;
	{
		PresidentialPardonForm P("PresidentialPardon");
		Bureaucrat B1("Bureaucrat1", 5);
		Bureaucrat B2("Bureaucrat2", 6);

		B1.signForm(P);
		B2.signForm(P);

		B1.executeForm(P);
		B2.executeForm(P);
	}

	// std::cout << std::endl << "Test 2" << std::endl;
	// {
	// 	RobotomyRequestForm R("RobotomyRequest");
	// 	Bureaucrat B3("Bureaucrat3", 3);
	// 	Bureaucrat B4("Bureaucrat4", 6);

	// 	B3.signForm(R);
	// 	B4.signForm(R);

	// 	B3.executeForm(R);
	// 	B4.executeForm(R);
	// }

	// std::cout << std::endl << "Test 3" << std::endl;
	// {
	// 	ShrubberyCreationForm S("ShrubberyCreation");
	// 	Bureaucrat B5("Bureaucrat5", 3);
	// 	Bureaucrat B6("Bureaucrat6", 6);

	// 	B5.signForm(S);
	// 	B6.signForm(S);

	// 	B5.executeForm(S);
	// 	B6.executeForm(S);
	// }
}
