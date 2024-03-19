/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:23:12 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 11:25:18 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <exception>
#include "defines.h"
#include "ScalarConverterUtils.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << CYAN << "ScalarConverter's Default constructor called" << RESET << std::endl;
}
ScalarConverter::ScalarConverter( ScalarConverter const &src ) {
    (void)src;
    std::cout << CYAN << "ScalarConverter's Copy constructor called" << RESET << std::endl;
}
ScalarConverter::~ScalarConverter() {
    std::cout << CYAN << "ScalarConverter's Destructor called" << RESET << std::endl;
}
ScalarConverter &ScalarConverter::operator=( ScalarConverter const &rhs ) {
    (void)rhs;
    std::cout << CYAN << "ScalarConverter's Assignation operator called" << RESET << std::endl;
    return *this;
}
void ScalarConverter::convert( std::string const &value ) {
    ScalarConverterUtils::printChar( value );
    ScalarConverterUtils::printInt( value );
    ScalarConverterUtils::printFloat( value );
    ScalarConverterUtils::printDouble( value );
}
