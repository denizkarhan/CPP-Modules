/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:47:05 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/11 00:54:03 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include "iostream"

template<typename T> void iter(T *array, size_t len, void(*f)(T const &)){
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

#endif
