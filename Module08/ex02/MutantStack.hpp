/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyStack.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:20:30 by dkarhan           #+#    #+#             */
/*   Updated: 2022/12/13 14:20:30 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() {};
        MutantStack(MutantStack const &other) : std::stack<T>(other) {};
        ~MutantStack() { this->c.clear(); };

        MutantStack &operator=(MutantStack const &obj) {
            if (obj != *this)
                this->c = obj.c;
            return *this;
        };

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};

#endif
