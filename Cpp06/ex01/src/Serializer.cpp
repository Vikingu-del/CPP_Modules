/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:32:32 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 12:09:53 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "defines.h"

Serializer::Serializer() {
    std::cout << GREEN << "Serializer's Default constructor called" << RESET << std::endl;
}
Serializer::Serializer( Serializer const &src ) {
    (void)src;
    std::cout << GREEN << "Serializer's Copy constructor called" << RESET << std::endl;
}
Serializer::~Serializer() {
    std::cout << GREEN << "Serializer's Destructor called" << RESET << std::endl;
}
Serializer &Serializer::operator=( Serializer const &rhs ) {
    (void)rhs;
    std::cout << GREEN << "Serializer's Assignation operator called" << RESET << std::endl;
    return *this;
}
uintptr_t Serializer::serialize( Data* ptr ) {
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}
Data* Serializer::deserialize( uintptr_t raw ) {
    Data* ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}