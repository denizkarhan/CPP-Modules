/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:50 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:50 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"
#include "iostream"

class Form
{
    private:
        std::string const   Name;
        std::string	target;
        bool                isSigned;
        const int           GradeToSign;
        const int           GradeToExecute;
    public:
        Form();
        Form(std::string Name, int sign, int exc);
        Form(const Form &temp);
        virtual ~Form();

        std::string		getName() const;
	    bool			getIsSigned() const;
	    void			setIsSigned(bool signedResult);
	    int				getSignGrade(void) const;
	    int				getExecGrade(void) const;
	    std::string		getFormTarget() const;
	    void			setFormTarget(std::string target);
        
        int getSign() const;
        int getExecute() const;

        Form    &operator=(const Form &obj);
        void    beSigned(Bureaucrat & bureaucrat);

        void			execute(Bureaucrat const &executor) const;
	    virtual void	executeForm() const = 0;
        virtual Form *clone(std::string _target) = 0;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream    &operator<<(std::ostream &o, const Form &obj);

#endif