/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:46:57 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:46:57 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Null"), Grade(150){
}

Bureaucrat::Bureaucrat(std::string Name, int Grade): Name(Name){
	if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->Grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj){
	*this = obj;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj){
	if (obj.Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (obj.Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->Name = obj.Name;
	this->Grade = obj.Grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &obj){
	return (o << obj.getName() << ", bureaucrat grade	" << obj.getGrade());
}

std::string	Bureaucrat::getName() const{
	return (this->Name);
}

int	Bureaucrat::getGrade() const{
	return (this->Grade);
}

void	Bureaucrat::incrementGrade(){
	(this->Grade > 1 && this->Grade <= 150) ? (this->Grade--) : (throw Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrementGrade(){
	(this->Grade >= 1 && this->Grade < 150) ? (this->Grade++) : (throw Bureaucrat::GradeTooLowException());
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Too High Exception");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Too Low Exception");
}
