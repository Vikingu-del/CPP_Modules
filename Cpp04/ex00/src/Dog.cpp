/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:18:16 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 20:59:22 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "defines.h"

Dog::Dog( void ) : Animal() {
    std::cout << CYAN << "Dog default constructor called!" << RESET << std::endl;
    this->setType("Dog");
}

Dog::Dog( const Dog &dog ) : Animal( dog ) {
    this->type = dog.type;
    std::cout << CYAN << "Dog copy constructor called!" << RESET << std::endl;
}

Dog::~Dog( void ) {
    std::cout << CYAN << "Dog destructor called!" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& Dog) {
    if (this != &Dog)
        *this = Dog;
    std :: cout << CYAN << "Dog assignment operator called!" << RESET << std::endl;
    return *this;
}

void Dog::makeSound( void ) const {
    std::cout << CYAN << "Dog sound! Ham Ham!" << RESET << std::endl;
}

/* ************************************************************************** */