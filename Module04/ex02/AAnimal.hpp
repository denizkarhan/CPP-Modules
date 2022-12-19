/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:29 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:29 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal(void);
		AAnimal(const AAnimal &temp);
		virtual ~AAnimal()=0;
		virtual AAnimal	&operator=(const AAnimal &temp);
	
		std::string		getType() const;
		void			setType(const std::string &type);

		virtual void	makeSound() const;
};

#endif
