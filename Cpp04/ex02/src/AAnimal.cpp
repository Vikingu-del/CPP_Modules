/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:55:32 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 21:28:27 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "defines.h"

AAnimal::AAnimal( void ) {
    std::cout << GREEN << "Animal default constructor called!" << RESET << std::endl;
}

AAnimal::AAnimal( const AAnimal &animal ) {
    *this = animal;
    std::cout << GREEN << "Animal copy constructor called!" << RESET << std::endl;
}

AAnimal::~AAnimal( void ) {
    std::cout << GREEN << "Animal destructor called!" << RESET << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& animal) {
    if (this != &animal) {
        this->type = animal.type;
        std::cout << GREEN << "Animal assignment operator called!" << RESET << std::endl;
    }
    return *this;
}

AAnimal::AAnimal( std::string type ) : type( type ) {
    std::cout << GREEN << "Animal type constructor called!" << RESET << std::endl;
}

void AAnimal::makeSound( void ) const {
    std::cout << GREEN << "Animal sound!" << RESET << std::endl;
}

std::string AAnimal::getType( void ) const {
    return this->type;
}

void AAnimal::setType( std::string type ) {
    this->type = type;
}


/* ************************************************************************** */