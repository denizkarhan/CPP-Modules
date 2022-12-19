/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:53 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:53 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	forms[0] = new PresidentialPardonForm();
	forms[1] = new RobotomyRequestForm();
	forms[2] = new ShrubberyCreationForm();
}

Intern::Intern(Intern const &cpy) {
	(void)cpy;
	forms[0] = new PresidentialPardonForm();
	forms[1] = new RobotomyRequestForm();
	forms[2] = new ShrubberyCreationForm();
}

Intern &Intern::operator=(Intern const &src) {
	(void)src;
	forms[0] = new PresidentialPardonForm();
	forms[1] = new RobotomyRequestForm();
	forms[2] = new ShrubberyCreationForm();
	return (*this);
}

Intern::~Intern() {
	delete forms[0];
	delete forms[1];
	delete forms[2];
}

const char	*Intern::FormNotFound::what() const throw() {
	return ("Form Not Found");
}

std::string handleString(std::string _str) {
	std::string newString;
	for (int i = 0 ; _str[i] ; i++) {
		if (_str[i] != 32){
			newString += _str[i];
		}
	}
	return (newString);
}

Form *Intern::makeForm(std::string form, std::string target) {
	Form *newForm;
	bool isCreated = false;
	std::string _names[3] = {"presidentialpardon", "robotomyrequest", "shrubberycreation"};
	
	for (int i = 0; i < 3; i++) {
		if (_names[i] == handleString(form)){
			newForm = forms[i]->clone(target);
			isCreated = true;
			break;
		}
	}
	if (isCreated){
		std::cout << "Intern creates " + form << std::endl;
		return newForm;
	}
	else
		throw Intern::FormNotFound();
}
