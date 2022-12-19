/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:49:05 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:49:05 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
    public:
    	ShrubberyCreationForm();
    	ShrubberyCreationForm(std::string target);
    	ShrubberyCreationForm(ShrubberyCreationForm const &src);
    	virtual ~ShrubberyCreationForm();
    	ShrubberyCreationForm &operator=(ShrubberyCreationForm scf);

		virtual Form	*clone(std:: string target);
    	virtual void executeForm() const;
};

#endif