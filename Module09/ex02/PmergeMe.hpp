/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeSortVector.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:51 by dkarhan           #+#    #+#             */
/*   Updated: 2023/03/18 14:38:51 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <unistd.h>
#include <vector>
#include <map>

class mergeSortVector
{
    public:
        mergeSortVector();
        ~mergeSortVector();

        std::vector<int> vector;
};

class mergeSortMap
{
    public:
        mergeSortMap();
        ~mergeSortMap();

        std::map<int, int> map;
};

#endif