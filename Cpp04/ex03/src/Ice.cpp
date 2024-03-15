/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 08:49:03 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/11 12:59:54 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) {
    this->_type = "ice";
    std::cout << CYAN << "Ice default constructor called!" << RESET << std::endl;
}

Ice::Ice( const Ice &ice) : AMateria(ice.getType()) {
    this->_type = ice.getType();
    std::cout << CYAN << "Ice copy constructor called!" << RESET << std::endl;
}

Ice::~Ice( void ) {
    std::cout << CYAN << "Ice destructor called!" << RESET << std::endl;
}

Ice &Ice::operator=( const Ice &ice) {
    if (this != &ice)
        *this = ice;
    std::cout << CYAN << "Ice assignment operator called!" << RESET << std::endl;
    return *this;
}

Ice *Ice::clone( void ) const {
    return new Ice(*this);
}

void Ice::use( ICharacter &target ) {
    std::cout << CYAN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}

/* ************************************************************************** */std::string const & Character::getName() const {
	return (this->_name);
}std::string const & Character::getName() const {
	return (this->_name);
}std::string const & Character::getName() const {
	return (this->_name);
}