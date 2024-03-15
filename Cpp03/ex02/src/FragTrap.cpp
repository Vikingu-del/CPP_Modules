/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 02:23:37 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 16:43:21 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include "defines.h"


FragTrap::FragTrap( void ) : ClapTrap( "FragTrap ", 100, 100, 30) {
    std::cout << RED << "FragTrap is created with the default constructor!" << std::endl; 
}

FragTrap::FragTrap( const std::string name ) : ClapTrap( name, 100, 100, 30 ) {
    std::cout << RED << "FragTrap " << name << " is created with name parameterised constructor!" << RESET << std::endl;
}

FragTrap::FragTrap( const FragTrap &clap ) {
    this->_name = clap._name;
    this->_attackDamage = clap._attackDamage;
    this->_hitPoints = clap._hitPoints;
    this->_energyPoints = clap._energyPoints;
    std::cout << RED << "FragTrap " << this->_name << " is created with copy constructor" << RESET << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &clap ) {
    if ( this != &clap ) {
        this->_name = clap._name;
        this->_attackDamage = clap._attackDamage;
        this->_hitPoints = clap._hitPoints;
        this->_energyPoints = clap._energyPoints;
    }
    std::cout << RED << "FragTrap " << this->_name << " is created with asignment operator" << RESET << std::endl;
    return *this;
}

FragTrap::~FragTrap( void ) {
    std::cout << RED << "FragTrap " << this->_name << " is destroyed!" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
    std::cout << RED << this->_name << "says: High five Guys!" << std::endl;
}

