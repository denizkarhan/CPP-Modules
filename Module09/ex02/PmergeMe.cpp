/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeSortVector.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:49 by dkarhan           #+#    #+#             */
/*   Updated: 2023/03/18 14:38:49 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

mergeSortVector::mergeSortVector() {}

mergeSortVector::~mergeSortVector()
{
    vector.erase(vector.begin(), vector.end());
}

mergeSortMap::mergeSortMap() {}

mergeSortMap::~mergeSortMap()
{
    map.erase(map.begin(), map.end());
}