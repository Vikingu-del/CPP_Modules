/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:20:40 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 04:18:57 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include "defines.h"

ClapTrap::ClapTrap( void ) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << GREEN << this->_name << " has been created with the default constructor!" << RESET << std::endl;
}

ClapTrap::ClapTrap( const std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << GREEN << "ClapTrap " << this->_name << " has been created with the name parameterised constructor!" << RESET << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clap ) : _name(clap._name), _hitPoints(clap._hitPoints), _energyPoints(clap._energyPoints), _attackDamage(clap._attackDamage) {
    std::cout << GREEN << "ClapTrap " << this->_name << " has been created with the copy constructor!" << RESET << std::endl;
}

ClapTrap::ClapTrap( const std::string name ,
                unsigned int hitPoints,
                unsigned int energyPoints,
                unsigned int attackDamage) : _name(name),
                                        _hitPoints(hitPoints),
                                        _energyPoints(energyPoints),
                                        _attackDamage(attackDamage) {
    std::cout << GREEN << "ClapTrap " << this->_name << " has been created with the custom parameterised constructor!" << RESET << std::endl;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << GREEN << "ClapTrap " << this->_name << " has been destroyed!" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap) {
    this->_name = clap._name;
    this->_hitPoints = clap._hitPoints;
    this->_energyPoints = clap._energyPoints;
    this->_attackDamage = clap._attackDamage;
    std::cout << GREEN << "ClapTrap " << this->_name << " has been assigned!" << RESET << std::endl;
    return *this;
}

// Member functions
void ClapTrap::attack( std::string const& target) {
    if ( this->_energyPoints < 1)
        std::cout << GREEN << this->_name << " has no energy points left to attack!" << RESET << std::endl;
    else {
        std::cout << GREEN << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage( unsigned int amount ) {
    if (this->_hitPoints < 1)
        std::cout << GREEN << this->_name << " has no hit points left!" << RESET << std::endl;
    else {
        std::cout << GREEN << this->_name << " takes " << amount << " points of damage!" << RESET << std::endl;
        if (this->_hitPoints <= amount)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= amount;
    }
}

void ClapTrap::beRepaired( unsigned int amount ) {
    std::cout << GREEN << this->_name << " has been repaired for " << amount << " hit points!" << RESET << std::endl;
    this->_hitPoints += amount;
}

