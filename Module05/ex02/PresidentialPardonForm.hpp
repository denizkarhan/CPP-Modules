/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:47:33 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/08 22:47:33 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm : public Form
{
    public:
    	PresidentialPardonForm();
    	PresidentialPardonForm(std::string target);
    	PresidentialPardonForm(PresidentialPardonForm const &src);
    	virtual ~PresidentialPardonForm();
    	PresidentialPardonForm &operator=(PresidentialPardonForm scf);

    	virtual void executeForm() const;
};

#endif
