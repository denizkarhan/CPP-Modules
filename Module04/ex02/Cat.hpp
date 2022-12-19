/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:41:44 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:41:44 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const &temp);
		~Cat();
		Cat		&operator=(Cat const &temp);

		void	makeSound(void) const;
};

#endif
