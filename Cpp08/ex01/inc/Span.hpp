/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:36:14 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/23 18:11:56 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

class Span {
public:
    Span();
    Span( unsigned int N);
    Span( const Span& src);
    ~Span();
    Span &operator=( const Span& src);
    void addNumber( int n );
    int shortestSpan();
    int longestSpan();
    void addNumbers( const std::vector<int>& numbers );
private:
    unsigned int _N;
    std::vector<int> _numbers;
};