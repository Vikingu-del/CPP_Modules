/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:11:41 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/11 08:48:52 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "defines.h"
#include <iostream>

AMateria::AMateria( std::string const &type ) : _type(type) {
    std::cout << GREEN << "Abstract Materia type constructor called" << RESET << std::endl;
    return ;
}

AMateria::~AMateria( void ) {
    std::cout << GREEN << "Abstract Materia destructor called" << RESET << std::endl;
    return ;
}

std::string const & AMateria::getType( void ) const {
    return this->_type;
}

void AMateria::use( ICharacter &target ) {
    std::cout << GREEN << "Abstract Materia use called on " << target.getName() << RESET << std::endl;
    return ;
}

/* ************************************************************************** */
