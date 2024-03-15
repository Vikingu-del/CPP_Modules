/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 06:50:11 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/07 06:51:03 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Point.hpp"

Fixed triangleArea( Point const a, Point const b, Point const c);
bool bsp( Point const a, Point const b, Point const c, Point const point);
