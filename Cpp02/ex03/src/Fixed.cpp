/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:34:07 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/07 06:51:41 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Constructors and destructors

Fixed::Fixed() : _value(0) {
    return ;
}

Fixed::Fixed(const Fixed &f) {
    *this = f;
    return ;
}

Fixed &Fixed::operator=(const Fixed &f) {
    this->_value = f.getRawBits();
    return *this;
}

Fixed::Fixed( const int n ) {
    this->_value = n << this->_bit;
    return ;
}

Fixed::Fixed( const float n ) {
    this->_value = n * (1 << this->_bit) + (n >= 0 ? 0.5 : -0.5);
    return ;
}

Fixed::~Fixed() {
    return ;
}


// Getters and setters

int Fixed::getRawBits( void ) const {
    return this->_value;
}

void Fixed::setRawBits( int const raw ) {
    this->_value = raw;
}


// Member functions

float Fixed::toFloat( void ) const {
    return (float(this->_value) / float(1 << this->_bit));
}

int Fixed::toInt( void ) const {
    return (this->_value >> this->_bit);
}


// Boolean operators

bool Fixed::operator>( const Fixed &s ) const {
    return (this->getRawBits() > s.getRawBits());
}

bool Fixed::operator<( const Fixed &s ) const {
    return (this->getRawBits() < s.getRawBits());
}

bool Fixed::operator>=( const Fixed &s ) const {
    return (this->getRawBits() >= s.getRawBits());
}

bool Fixed::operator<=( const Fixed &s ) const {
    return (this->getRawBits() <= s.getRawBits());
}

bool Fixed::operator==( const Fixed &s ) const {
    return (this->getRawBits() == s.getRawBits());
}

bool Fixed::operator!=( const Fixed &s ) const {
    return (this->getRawBits() != s.getRawBits());
}


// Arithmetic operators

Fixed Fixed::operator+( const Fixed &s ) const {
    return Fixed( this->toFloat() + s.toFloat() );
}

Fixed Fixed::operator-( const Fixed &s ) const {
    return Fixed( this->toFloat() - s.toFloat() );
}

Fixed Fixed::operator*( const Fixed &s ) const {
    return Fixed( this->toFloat() * s.toFloat() );
}

Fixed Fixed::operator/( const Fixed &s ) const {
    return Fixed( this->toFloat() / s.toFloat() );
}

std::ostream &operator<<( std::ostream &out, const Fixed &f) {
    return (out << f.toFloat());
}

Fixed &Fixed::operator++( void ) {
    (this->_value)++;
    return (*this);
}

Fixed &Fixed::operator--( void ) {
    (this->_value)--;
    return (*this);
}

Fixed Fixed::operator++( int n ) {
    Fixed temp = *this;
    if (n < 0) {
        --(*this);
    } else
        ++(*this);
    return (temp);
}

Fixed Fixed::operator--( int n ) {
    Fixed temp = *this;
    if (n < 0) {
        ++(*this);
    } else
        --(*this);
    return (temp);
}


Fixed Fixed::min( const Fixed &a, const Fixed &b ) {
    return (a < b ? a : b);
}

Fixed Fixed::max( const Fixed &a, const Fixed &b ) {
    return (a > b ? a : b);
}


Fixed Fixed::abs( const Fixed &f ) {
    if (f < 0)
        return f * -1;
    return f;
}

