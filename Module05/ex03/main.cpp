/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:48:00 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:48:00 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "test 1" << std::endl;
	try{
		Intern Intern1;
		Form* F1;

		F1 = Intern1.makeForm("robotomy request", "Zidane");
		std::cout << *F1 << std::endl;
		F1->executeForm();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	// std::cout << std::endl << "test 2" << std::endl;
	// try{
	// 	Intern Intern2;
	// 	Form* F2;

	// 	F2 = Intern2.makeForm("presidential pardon", "Ronaldinho");
	// 	std::cout << *F2 << std::endl;
	// 	F2->executeForm();
	// }
	// catch(const std::exception& e){
	// 	std::cerr << e.what() << std::endl;
	// }
}
