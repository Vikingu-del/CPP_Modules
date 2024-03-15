/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:18:16 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 20:30:25 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "defines.h"

Dog::Dog( void ) : Animal() {
    std::cout << CYAN << "Dog default constructor called!" << RESET << std::endl;
    this->setType("Dog");
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "[Dog] Brain memory allocation failed: " << e.what() << std::endl;
    }
}

Dog::Dog( const Dog &dog ) : Animal( dog ) {
    this->type = dog.type;
    try {
        this->_brain = new Brain(*dog._brain);
    }
    catch (const std::bad_alloc& e) {
        std::cout << "[Dog] Brain memory allocation failed: " << e.what() << std::endl;
    }
    std::cout << CYAN << "Dog copy constructor called!" << RESET << std::endl;
}

Dog::~Dog( void ) {
    delete this->_brain;
    std::cout << CYAN << "Dog destructor called!" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& dog) {
    if (this != &dog)
        *this = dog;
    std :: cout << CYAN << "Dog assignment operator called!" << RESET << std::endl;
    return *this;
}

void Dog::makeSound( void ) const {
    std::cout << CYAN << "Dog sound! Ham Ham!" << RESET << std::endl;
}

/* ************************************************************************** */