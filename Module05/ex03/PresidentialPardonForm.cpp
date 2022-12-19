/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:48:04 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:48:04 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->setFormTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), src.getSignGrade(), src.getExecGrade())
{
	*this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm scf)
{
	this->setIsSigned(scf.getIsSigned());
	this->setFormTarget(scf.getFormTarget());
	return (*this);
}

void PresidentialPardonForm::executeForm() const
{
	std::cout << this->getFormTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

Form *PresidentialPardonForm::clone(std::string target) {
	return (new PresidentialPardonForm(target));
}
