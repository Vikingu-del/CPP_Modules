/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:02:33 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 19:05:44 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "defines.h"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {
    std::cout << RED << "WrongAnimal default constructor called!" << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wrong_animal ) {
    *this = wrong_animal;
    std::cout << RED << "WrongAnimal copy constructor called!" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << RED << "WrongAnimal destructor called!" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrong_animal) {
    if (this != &wrong_animal) {
        this->type = wrong_animal.type;
        std :: cout << "WrongAnimal assignment operator called!" << RESET << std::endl;
    }
    return *this;
}

WrongAnimal::WrongAnimal( std::string type ) : type( type ) {
    std::cout << RED << "WrongAnimal type constructor called!" << RESET << std::endl;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << RED << "WrongAnimal sound!" << RESET << std::endl;
}

std::string WrongAnimal::getType( void ) const {
    return this->type;
}

void WrongAnimal::setType( std::string type ) {
    this->type = type;
}

/* ************************************************************************** */