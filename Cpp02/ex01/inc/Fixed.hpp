/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:15:28 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/07 02:49:41 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
    private:
        int _value;
        static const int _bit = 8;
    public:
        Fixed();
        Fixed( const int n );
        Fixed( const float n );
        Fixed( const Fixed &f );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=( const Fixed &f );
        ~Fixed();
        // << operator overload without using friends
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);