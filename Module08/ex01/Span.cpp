/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:20:41 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/13 14:20:41 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) , filled(0)
{
	this->storage = new int[1];
	this->storage[0] = 0;
}

Span::Span(unsigned int s): size(s), filled(0)
{
	this->storage = new int[this->size];
	for (int x = 0; x < (int)this->size; x++)
		this->storage[x] = 0;
}

Span::Span(Span &spn) : size(0), filled(0)
{
	this->storage = new int[1];
	this->storage[0] = 0;
	*this = spn;
}

Span::~Span()
{
	delete this->storage;
}

Span &Span::operator=(const Span &spn)
{
	if (this == &spn)
		return *this;
	delete this->storage;
	this->size = spn.size;
	this->filled = spn.filled;
	this->storage = new int[this->size];
	for (int x = 0; x < (int)this->size; x++)
		this->storage[x] = spn.storage[x];
	return *this;
}

void Span::OutofBoundsException(void) const
{
	throw std::invalid_argument ("Out of bounds");
}

void Span::StorageFullException(void) const
{
	throw std::invalid_argument ("Storage is full");
}

void Span::StorageNotFullEnought(void) const
{
	throw std::invalid_argument ("Not enoght numbers on storage");
}

void Span::addNumber(int x)
{
	if (this->filled >= this->size)
		this->StorageFullException();
	this->storage[this->filled++] = x;
}
class l{
	public:
		x;
};
static int span(int d1, int d2)
{
	if (d2 > d1)
		return (d2 - d1);
	return (d1 - d2);
}

int Span::shortestSpan(void)
{
	if (this->filled < 2)
		this->StorageNotFullEnought();
	int shortest = span(this->storage[0], this->storage[1]);

	for (int x = 0 ; x < (int)this->filled ; x++)
		for (int y = x ; y < (int)this->filled ; y++)
			if (shortest > span(this->storage[x], this->storage[y]) && x != y)
				shortest = span(this->storage[x], this->storage[y]);
	return shortest;	
}

int Span::longestSpan(void)
{
	if (this->filled < 2)
		this->StorageNotFullEnought();
	int longest = span(this->storage[0], this->storage[1]);

	for (int x = 0 ; x < (int)this->filled ; x++)
		for (int y = x ; y < (int)this->filled ; y++)
			if (longest < span(this->storage[x], this->storage[y]) && x != y)
				longest = span(this->storage[x], this->storage[y]);
	return longest;	
}

unsigned int Span::getsize() const
{
	return (this->size);
}

int Span::getstoredValue(unsigned int i) const
{
	if (i >= this->size)
		this->OutofBoundsException();
	return this->storage[i];
}

std::ostream& operator<<(std::ostream& os, const Span &sp)
{
	for (int x = 0; x < (int)sp.getsize();x++)
			os << "array["<< x <<"]" << "-> " << sp.getstoredValue(x) << std::endl;
	return os;
}
