/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:10 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:10 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): Name("Null"), GradeToSign(1), GradeToExecute(1) {
    this->isSigned = false;
}

Form::Form(std::string Name, int sign, int exc) : Name(Name), GradeToSign(sign), GradeToExecute(exc){
    if (this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw  Form::GradeTooLowException();
    this->isSigned = false;
}

Form::Form(const Form &temp): Name(temp.Name), GradeToSign(temp.GradeToSign), GradeToExecute(temp.GradeToExecute) {
    *this = temp;
}

Form::~Form(){
}

int Form::getSign() const {
    return (this->GradeToSign);
}

int Form::getExecute() const {
    return (this->GradeToExecute);
}

std::string Form::getName() const {
    return (this->Name);
}

bool    Form::getIsSigned() const {
    return (this->isSigned);
}

Form    &Form::operator=(const Form &temp){
    if (this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw Form::GradeTooLowException();
    this->isSigned = temp.isSigned;
    return *this;
}

void    Form::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() > this->getSign())
        throw Form::GradeTooLowException();
    this->isSigned = true;
}

std::ostream    &operator<<(std::ostream &o, const Form &temp){
    o << "Form name ->	" << temp.getName() << std::endl
      << "is signed ->	" << (temp.getIsSigned() ? "yes" : "no") << std::endl
      << "grade to sign ->	" << temp.getSign() << std::endl
      << "greade to execute ->	" << temp.getExecute();
    return (o);
}

const char  *Form::GradeTooHighException::what() const throw(){
    return ("Grade Too High");
}

const char  *Form::GradeTooLowException::what() const throw(){
    return ("Grade Too Low");
}
