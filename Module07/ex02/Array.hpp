/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:46:50 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/11 00:54:30 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T> class Array
{
	private:
		T 			*_arr;
		unsigned int _len;

	public:
		Array<T>(){
			_len = 0;
			_arr = new T[_len];
		}

		Array<T>(unsigned int len){
			_len = len;
			_arr = new T[_len];
			for (unsigned int i = 0; i < len; i++)
				_arr[i] = 0;
		}

		Array<T>(Array &arr){
			_len = arr.getSize();
			_arr = new T[_len];
			*this = arr;
			for (unsigned int i = 0; i < _len; i++)
				_arr[i] = arr[i];
		}

		~Array<T>(){
			if (this->_arr)
				delete [] _arr;
		}

		Array<T> &operator=(const Array &arr){
			delete[] _arr;
			_arr = new T[arr.getSize()];
			_len = arr.getSize();
			for (unsigned int i = 0; i < _len; i++)
				_arr[i] = arr[i];
			return (*this);
		}

		T &operator[](unsigned int i) const{
			if (i >= this->_len)
				throw (Array::outOfLimits());
			return (this->_arr[i]);
		}

		unsigned int getSize() const{
			return this->_len;
		}

		class outOfLimits : public std::exception{
			public:
				virtual const char* what() const throw(){
					return "Index out of limits";
                }
		};
};

#endif
