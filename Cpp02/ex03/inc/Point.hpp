/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 05:01:02 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/07 06:42:37 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point {
    public:
        Point( void );
        Point( const float x, const float y);
        Point( const Point &p );
        Point &operator=( const Point &p );
        ~Point( void );
        bool operator==( const Point &p ) const;
        Fixed getX( void ) const;
        Fixed getY( void ) const;
    private:
        Fixed _x;
        Fixed _y;
}; 
