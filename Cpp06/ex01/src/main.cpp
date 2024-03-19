/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:38:13 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 12:11:46 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Serializer.hpp"
#include "Data.h"
#include "defines.h"

int main( void ) {
    Data *data = new Data(42, "eseferi", 42.42);
    uintptr_t raw = Serializer::serialize(data);
    std::cout << "raw: " << raw << std::endl;
    std::stringstream ss;
    ss << raw;
    ScalarConverter::convert(ss.str());
    Data *ptr = Serializer::deserialize(raw);
    std::cout << "id: " << ptr->id << std::endl;
    std::cout << "name: " << ptr->name << std::endl;
    std::cout << "value: " << ptr->value << std::endl;
    delete data;
    raw = Serializer::serialize(NULL);
    std::cout << "raw: " << raw << std::endl;
    ptr = Serializer::deserialize(raw);
    std::cout << "Deserialized ptr: " << ptr << std::endl; // This should print "Deserialized ptr: 0
    return 0;
}