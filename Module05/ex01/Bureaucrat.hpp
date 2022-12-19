/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:08 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:08 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

class Bureaucrat;
#include "iostream"
#include "Form.hpp"

class	Bureaucrat
{
	private:
		std::string	Name;
		int			Grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &obj);
		std::string	getName() const;
		int			getGrade() const;

		class GradeTooHighException : public std::exception{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				const char *what() const throw();
		};

		void	incrementGrade();
		void	decrementGrade();
        void	signForm(Form &form);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);

#endif
