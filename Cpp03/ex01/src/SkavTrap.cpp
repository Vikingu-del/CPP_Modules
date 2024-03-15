/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SkavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:26:18 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 16:21:59 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SkavTrap.hpp"
#include <iostream>
#include "defines.h"


SkavTrap::SkavTrap( void ) : ClapTrap( "SkavTrap ", 100, 50, 20) {
    std::cout << YELLOW << "SkavTrap is created with the default constructor!" << std::endl; 
}

SkavTrap::SkavTrap( const std::string name ) : ClapTrap( name, 100, 50, 20 ) {
    std::cout << YELLOW << "SkavTrap " << name << " is created with name parameterised constructor!" << RESET << std::endl;
}

SkavTrap::SkavTrap( const SkavTrap &clap ) {
    this->_name = clap._name;
    this->_attackDamage = clap._attackDamage;
    this->_hitPoints = clap._hitPoints;
    this->_energyPoints = clap._energyPoints;
    std::cout << YELLOW << "SkavTrap " << this->_name << " is created with copy constructor" << RESET << std::endl;
}

SkavTrap &SkavTrap::operator=( const SkavTrap &clap ) {
    this->_name = clap._name;
    this->_attackDamage = clap._attackDamage;
    this->_hitPoints = clap._hitPoints;
    this->_energyPoints = clap._energyPoints;
    std::cout << YELLOW << "SkavTrap " << this->_name << " is created with asignment operator" << RESET << std::endl;
    return *this;
}

SkavTrap::~SkavTrap( void ) {
    std::cout << YELLOW << "SkavTrap " << this->_name << " is destroyed!" << std::endl;
}

void SkavTrap::GuardGate( void ) {
    std::cout << YELLOW << this->_name << " is guarding the gate!" << std::endl;
}

void SkavTrap::attack( const std::string& target ) {
    if ( this->_energyPoints < 1)
        std::cout << YELLOW << this->_name << " has no energy points left to attack!" << RESET << std::endl;
    else {
        std::cout << YELLOW << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
        this->_energyPoints--;
    }
}
