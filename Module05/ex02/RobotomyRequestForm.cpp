/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:35 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:35 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45){
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45){
	this->setFormTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), src.getSignGrade(), src.getExecGrade()){
	*this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm scf){
	this->setIsSigned(scf.getIsSigned());
	this->setFormTarget(scf.getFormTarget());
	return (*this);
}

void RobotomyRequestForm::executeForm() const{
	srand(time(NULL));
	if (rand() % 2 == 0) {
		std::cout << "Bzzzztttt...." << std::endl;
		std::cout << this->getFormTarget() << " has been robotomized successfully." << std::endl;
	}
	else {
		std::cout << this->getFormTarget() << " robotomy failed." << std::endl;
	}
}
