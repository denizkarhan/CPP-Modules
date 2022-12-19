/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:42:01 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:42:01 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &temp);
		virtual ~WrongAnimal();
		virtual WrongAnimal	&operator=(const WrongAnimal &temp);

		std::string		getType() const;
		void			setType(const std::string &type);
		virtual void	makeSound() const;
};

#endif