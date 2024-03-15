/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:15:28 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/07 05:34:19 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
    private:
        int _value;
        static const int _bit = 8;
    public:
        // constructors
        Fixed();
        Fixed( const int n );
        Fixed( const float n );
        Fixed( const Fixed &f );
        Fixed &operator=( const Fixed &f );
        // destructor
        ~Fixed();
        // getters and setters
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        // member functions
        float toFloat( void ) const;
        int toInt( void ) const;
        // boolean operators
        bool operator>( const Fixed &f ) const;
        bool operator<( const Fixed &f ) const;
        bool operator>=( const Fixed &f ) const;
        bool operator<=( const Fixed &f ) const;
        bool operator==( const Fixed &f ) const;
        bool operator!=( const Fixed &f ) const;
        // arithmetic operators
        Fixed operator+(const Fixed &f) const;
        Fixed operator-(const Fixed &f) const;
        Fixed operator*(const Fixed &f) const;
        Fixed operator/(const Fixed &f) const;
        // increment and decrement operators
        Fixed &operator++( void );
        Fixed operator++( int n );
        Fixed &operator--( void );
        Fixed operator--(int);
        // min and max
        static Fixed min( const Fixed &a, const Fixed &b );
        static Fixed max( const Fixed &a, const Fixed &b );
        static Fixed abs( const Fixed &f );
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);