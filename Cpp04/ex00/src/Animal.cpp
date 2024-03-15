/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:55:32 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 18:55:12 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "defines.h"

Animal::Animal( void ) {
    std::cout << GREEN << "Animal default constructor called!" << RESET << std::endl;
}

Animal::Animal( const Animal &animal ) {
    *this = animal;
    std::cout << GREEN << "Animal copy constructor called!" << RESET << std::endl;
}

Animal::~Animal( void ) {
    std::cout << GREEN << "Animal destructor called!" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& animal) {
    if (this != &animal) {
        this->type = animal.type;
        std::cout << GREEN << "Animal assignment operator called!" << RESET << std::endl;
    }
    return *this;
}

Animal::Animal( std::string type ) : type( type ) {
    std::cout << GREEN << "Animal type constructor called!" << RESET << std::endl;
}

void Animal::makeSound( void ) const {
    std::cout << GREEN << "Animal sound!" << RESET << std::endl;
}

std::string Animal::getType( void ) const {
    return this->type;
}

void Animal::setType( std::string type ) {
    this->type = type;
}


/* ************************************************************************** */