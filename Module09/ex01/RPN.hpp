/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpnStack.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:37 by dkarhan           #+#    #+#             */
/*   Updated: 2023/03/18 14:38:37 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
    public:
        RPN();
        ~RPN();

        std::stack<int> stack;
};

#endif