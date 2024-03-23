/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:32:01 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/23 20:06:00 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    class iterator {
    public:
        iterator(typename std::stack<T>::container_type::iterator it) : _it(it) {}
        iterator& operator++() { ++_it; return *this; }
        iterator operator++(int) { iterator tmp = *this; ++(*this); return tmp; }
        iterator& operator--() { --_it; return *this; }
        iterator operator--(int) { iterator tmp = *this; --(*this); return tmp; }
        T& operator*() { return *(this->_it); }
        bool operator==(const iterator& it) { return this->_it == it._it; }
        bool operator!=(const iterator& it) { return this->_it != it._it; }
    private:
        typename std::stack<T>::container_type::iterator _it;
    };
    iterator begin() { return iterator( this->c.begin()); } // c represents the underlaying container of stack
    iterator end() { return iterator( this->c.end()); }
}; 