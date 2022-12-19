/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:51 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:51 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const &temp);
		~Dog();
		Dog		&operator=(Dog const &temp);
		
		void	makeSound(void) const;
};

#endif
