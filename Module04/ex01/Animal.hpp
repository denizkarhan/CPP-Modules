/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:39 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:40:39 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal &temp);
		virtual ~Animal();
		virtual Animal	&operator=(const Animal &temp);
	
		std::string		getType() const;
		void			setType(const std::string &type);

		virtual void	makeSound() const;
};

#endif
