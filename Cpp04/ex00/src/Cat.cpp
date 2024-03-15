/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:33:19 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 20:58:32 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "defines.h" 

Cat::Cat( void ) : Animal() {
    std::cout << PURPLE << "Cat default constructor called!" << RESET << std::endl;
    this->type = "Cat";
}

Cat::Cat( const Cat &cat ) : Animal( cat ) {
    this->type = cat.type;
    std::cout << PURPLE << "Cat copy constructor called!" << RESET << std::endl;
}

Cat::~Cat( void ) {
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