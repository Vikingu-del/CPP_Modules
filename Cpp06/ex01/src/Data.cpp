/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:40:04 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 11:42:51 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

Data::Data(int _id, const std::string &_name, double _value) : id(_id), name(_name), value(_value) {};
Data::Data() : id(0), name(""), value(0) {};