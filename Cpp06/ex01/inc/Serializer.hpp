/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:27:41 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 12:09:28 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Data.h"
#include <sstream>

typedef unsigned long uintptr_t;

class Serializer {
public:
    static uintptr_t serialize( Data* ptr );
    static Data* deserialize( uintptr_t raw );
private:
    Serializer();
    Serializer( Serializer const &src );
    ~Serializer();
    Serializer &operator=( Serializer const &rhs );
};
