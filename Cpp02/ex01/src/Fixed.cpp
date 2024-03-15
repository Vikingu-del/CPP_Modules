/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:34:07 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/07 02:46:40 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &f) {
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
    return ;
}

Fixed &Fixed::operator=(const Fixed &f) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = f.getRawBits();
    return *this;
}

Fixed::Fixed( const int n ) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_bit;
    return ;
}

Fixed::Fixed( const float n ) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = n * (1 << this->_bit) + (n >= 0 ? 0.5 : -0.5);
    return ;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits( int const raw ) {
    this->_value = raw;
}

float Fixed::toFloat( void ) const {
    return (float(this->_value) / float(1 << this->_bit));
}

int Fixed::toInt( void ) const {
    return (this->_value >> this->_bit);
}

std::ostream &operator<<( std::ostream &out, const Fixed &f) {
    return (out << f.toFloat());
}