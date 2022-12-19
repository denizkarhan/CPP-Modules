/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:25 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/06 20:40:25 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	    WrongCat(void);
		WrongCat(WrongCat const &temp);
		virtual ~WrongCat();
		WrongCat	&operator=(WrongCat const &temp);
		
		void		makeSound(void) const;
};

#endif
