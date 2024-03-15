/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 08:36:11 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/11 08:51:15 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
    this->_type = "cure";
    std::cout << MAGENTA << "Cure default constructor called!" << RESET << std::endl;
}

Cure::Cure( const Cure &cure) : AMateria(cure.getType()) {
    this->_type = cure.getType();
    std::cout << MAGENTA << "Cure copy constructor called!" << RESET << std::endl;
}

Cure::~Cure( void ) {
    std::cout << MAGENTA << "Cure destructor called!" << RESET << std::endl;
}

Cure &Cure::operator=( const Cure &cure) {
    if (this != &cure)
        *this = cure;
    std::cout << MAGENTA << "Cure assignment operator called!" << RESET << std::endl;
    return *this;
}

std::string const &Cure::getType( void ) const {
    return this->_type;
}

Cure *Cure::clone( void ) const {
    return new Cure(*this);
}

void Cure::use( ICharacter &target ) {
    std::cout << MAGENTA << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}

/* ************************************************************************** */