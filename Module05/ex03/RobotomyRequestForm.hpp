/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:48:50 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:48:50 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm : public Form
{
    public:
    	RobotomyRequestForm();
    	RobotomyRequestForm(std::string target);
    	RobotomyRequestForm(RobotomyRequestForm const &src);
    	virtual ~RobotomyRequestForm();
    	RobotomyRequestForm &operator=(RobotomyRequestForm scf);

		virtual Form	*clone(std:: string target);
    	virtual void executeForm() const;
};

#endif
