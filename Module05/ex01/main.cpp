/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:15 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:15 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "cassert"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << std::endl << "Test 1" << std::endl;
	try{
		Bureaucrat	B("Ahmet", 85);
		Form	f("Nufus Fotokopisi", 90, 80);
		B.signForm(f); // or f.beSigned(B);
		std::cout << f << std::endl;
		std::cout << B << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &obj){
        std::cerr << "Too High Exception" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &obj){
        std::cerr << "Too Low Exception" << std::endl;
	}

	// std::cout << std::endl << "Test 2" << std::endl;
    // try{
	// 	Form f1 = Form("Ogrenci Belgesi", 10, 5);
	// 	Bureaucrat b1 = Bureaucrat("Bob", 30);
	// 	Bureaucrat b2 = Bureaucrat("Jhon", 1);

	// 	b1.signForm(f1);
	// 	b2.signForm(f1);

	// 	Form f2 = Form("from2", 0, 5);
	// }
	// catch (std::exception &e){
	// 	std::cout << "Exception: " << e.what() << std::endl;
	// }
}
