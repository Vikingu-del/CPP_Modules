/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:36:14 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/23 14:00:03 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename Container>
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
    void iter();
private:
    Container numbers;
    unsigned int _N;
};