/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:33:19 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 21:28:09 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "defines.h" 

Cat::Cat( void ) : AAnimal() {
    std::cout << PURPLE << "Cat default constructor called!" << RESET << std::endl;
    this->type = "Cat";
    try {
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e) {
		std::cout << "[Cat] Brain memory allocation failed: " << e.what() << std::endl;
	}
}

Cat::Cat( const Cat &cat ) : AAnimal( cat ) {
    this->type = cat.type;
    try {
        this->_brain = new Brain(*cat._brain);
    }
    catch (const std::bad_alloc& e) { 
        std::cout << "[Cat] Brain memory allocation failed: " << e.what() << std::endl;
    }
    std::cout << PURPLE << "Cat copy constructor called!" << RESET << std::endl;
}

Cat::~Cat( void ) {
    delete this->_brain;
    std::cout << PURPLE << "Cat destructor called!" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& cat) {
    if (this != &cat)
        *this = cat;
    std :: cout << PURPLE << "Cat assignment operator called!" << RESET << std::endl;
    return *this;
}

void Cat::makeSound( void ) const {
    std::cout << PURPLE << "Cat sound! Miau!" << RESET << std::endl;
}

void Cat::printBrainAddres( void ) const {
    std::cout << PURPLE << &_brain << RESET << std::endl;
}

/* ************************************************************************** */