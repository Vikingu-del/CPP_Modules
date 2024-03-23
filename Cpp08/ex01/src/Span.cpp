/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:52:34 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/23 18:14:05 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <iostream>
#include <iterator>
#include <algorithm>

Span::Span() : _N(0), _numbers(0) {}

Span::Span( unsigned int N ) : _N(N), _numbers(0) {}

Span::~Span() {}

Span::Span( const Span& src) : _N(src._N), _numbers(src._numbers) {}

Span &Span::operator=( const Span& src) {
    if (this != &src) {
        this->_N = src._N;
        _numbers = src._numbers;
    }
    return *this;
}

void Span::addNumber(int n) {
    if (this->_numbers.size() >= this->_N)
        throw std::runtime_error("Maximum number of elements reached");
    _numbers.push_back(n);
}

void Span::addNumbers( const std::vector<int>& numbers ) {
    if (this->_numbers.size() + numbers.size() > this->_N)
        throw std::runtime_error("Maximum number of elements reached");
    this->_numbers.insert(_numbers.end(), numbers.begin(), numbers.end());
}

int Span::shortestSpan() {
    if (this->_numbers.size() < 2)
        throw std::runtime_error("Cannot find shortest span with less than 2 elements!");
    sort(this->_numbers.begin(), this->_numbers.end());
    int shortest_span = this->_numbers[1] - this->_numbers[0];
    for (std::vector<int>::iterator it = this->_numbers.begin() + 1; it < this->_numbers.end(); it++) {
        int diff = *it - *(it - 1);
        if (diff < shortest_span)
            shortest_span = diff;
    }
    return shortest_span;
}

int Span::longestSpan() {
    if (this->_numbers.size() < 2)
        throw std::runtime_error("Cannot find longest span with less than 2 elements!");
    sort(this->_numbers.begin(), this->_numbers.end());
    return (*(this->_numbers.end() - 1) - *(this->_numbers.begin()));
}