/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 05:08:30 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/07 06:50:40 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

Fixed triangleArea( Point const a, Point const b, Point const c)
{
    return (Fixed::abs((a.getX() * (b.getY() - c.getY())
        + b.getX() * (c.getY() - a.getY())
        + c.getX() * (a.getY() - b.getY())) / 2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    if ((a.getX() == b.getX() && a.getX() == c.getX()) || (a.getY() == b.getY() && a.getY() == c.getY()))
    {
        std::cout << "Triangle is not valid" << std::endl;
        return false;
    }
    if (a == point || b == point || c == point) {
        std::cout << "Point is on the edge of the triangle" << std::endl;
        return false;
    }
    return (triangleArea(a, b, c)
        == triangleArea(a, b, point)
        + triangleArea(a, c, point)
        + triangleArea(b, c, point));
}