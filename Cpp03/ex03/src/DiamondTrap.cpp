/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 03:21:57 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 05:21:30 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "defines.h"
#include <iostream>

DiamondTrap::DiamondTrap( void ) : SkavTrap(), FragTrap() {
    this->_name = "ClapTrap";
    this->setHitPoints();
    this->setAttackDamage();
    this->setEnergyPoints();
    std::cout << PURPLE << "DiamondTrap is created with the default constructor!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), SkavTrap(name), FragTrap(name) {
    this->_name = name;
    this->setHitPoints();
    this->setAttackDamage();
    this->setEnergyPoints();
    std::cout << PURPLE << "DiamondTrap " << this->_name << " is created with name parameterised constructor!" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << PURPLE << "DiamondTrap " << this->_name << " is destroyed!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& d) : SkavTrap(d), FragTrap(d) {
    _name = d._name;
    std::cout << PURPLE << "DiamondTrap " << this->_name << " is created with the copy constructor!" << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& d ) {
    if ( this != &d ) {
        ClapTrap::operator=(d);
        SkavTrap::operator=(d);
        FragTrap::operator=(d);
        this->_name = d._name;
    }
    std::cout << PURPLE << "DiamondTrap " << this->_name << " is created with assignment operator!" << RESET << std::endl;
    return *this;
}

void DiamondTrap::setHitPoints( void ) {
    this->_hitPoints = SkavTrap::_hitPoints;
}

void DiamondTrap::setEnergyPoints( void ) {
    this->_energyPoints = SkavTrap::_energyPoints;
}

void DiamondTrap::setAttackDamage( void ) {
    this->_attackDamage = SkavTrap::_hitPoints;
}

void DiamondTrap::whoAmI( void ) const {
    std::cout << "My name is " << this->_name << std::endl;
    std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}