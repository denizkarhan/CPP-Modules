/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:01 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:01 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "cassert"
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "test 1" << std::endl;
	try {
        Bureaucrat B("Ahmet", 3);
        Bureaucrat B2;
        std::cout << B << std::endl;
        std::cout << B2 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Too High Exception" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Too Low Exception" << std::endl;
    }

    // // too high
    // std::cout << "test 2" << std::endl;
    // try {
    //     Bureaucrat B3("Mehmet", 1);
    //     // std::cout << B3 << std::endl;
    //     B3.incrementGrade();
    //     // std::cout << B3 << std::endl;
    // }
    // catch (Bureaucrat::GradeTooHighException &e) {
    //     std::cerr << "Too High Exception" << std::endl;
    // }
    // catch (Bureaucrat::GradeTooLowException &e) {
    //     std::cerr << "Too Low Exception" << std::endl;
    // }

    // // too low
    // std::cout << "test 3" << std::endl;
    // try {
    //     Bureaucrat B4("Selin", 150);
    //     // std::cout << B4 << std::endl;
    //     B4.decrementGrade();
    //     // std::cout << B4 << std::endl;
    // }
    // catch (Bureaucrat::GradeTooHighException &e) {
    //     std::cerr << e.what() << std::endl;
    // }
    // catch (Bureaucrat::GradeTooLowException &e) {
    //     std::cerr << e.what() << std::endl;
    // }
}
