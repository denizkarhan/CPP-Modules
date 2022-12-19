/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:58 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:58 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
    	Form *forms[3];
    public:
    	Intern();
    	Intern(Intern const &copy);
    	Intern &operator=(Intern const &src);
    	~Intern();

    	Form *makeForm(std::string form, std::string target);
    	
		class FormNotFound : public std::exception{
    	    public:
    	    	const char *what() const throw();
    	};
};

#endif