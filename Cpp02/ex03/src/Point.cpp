/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 05:04:31 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/07 06:08:51 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
    return ;
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
    return ;
}

Point::Point( const Point &p ) : _x(p._x), _y(p._y) {
    return ;
}

Fixed Point::getX( void ) const {
    return this->_x;
}

Fixed Point::getY( void ) const {
    return this->_y;
}

Point &Point::operator=( const Point &p) {
    this->_x = p.getX();
    this->_y = p.getY();
    return *this;
}

Point::~Point( void ) {
    return ;
}

bool Point::operator==( const Point &p ) const {
    return (this->_x == p._x && this->_y == p._y);
}