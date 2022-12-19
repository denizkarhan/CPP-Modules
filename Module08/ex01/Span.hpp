/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:20:37 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/13 14:20:37 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include<iomanip>
# include<iostream>

class Span
{
	private:
		int *storage;
		unsigned int size;
		unsigned int filled;

		void OutofBoundsException(void) const;
		void StorageFullException(void) const;
		void StorageNotFullEnought(void) const;

	public:
		Span();
		Span(unsigned int s);
		Span(Span &spn);
		~Span();
		Span &operator=(const Span &spn);

		void addNumber(int x);
		int shortestSpan(void);
		int longestSpan(void);

		unsigned int getsize() const;
		int getstoredValue(unsigned int i) const;
};

std::ostream& operator<<(std::ostream& os, const Span &sp);

#endif
