/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:12 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:12 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
#include "Bureaucrat.hpp"
#include "iostream"

class Form
{
    private:
        std::string const   Name;
        bool                isSigned;
        const int           GradeToSign;
        const int           GradeToExecute;
    public:
        Form();
        Form(std::string Name, int sign, int exc);
        Form(const Form &temp);
        ~Form();

        int getSign() const;
        int getExecute() const;

        std::string getName() const;
        bool        getIsSigned() const;

        Form    &operator=(const Form &obj);
        void    beSigned(Bureaucrat & bureaucrat);

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
};

std::ostream    &operator<<(std::ostream &o, const Form &obj);

#endif