/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 08:58:38 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/11 12:59:37 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("default") {
    std::cout << YELLOW << "Character default constructor called!" << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::Character(std::string name) : _name(name) {
	std::cout << YELLOW << "A character named \"" << this->_name << "\" was created!" << RESET << std::endl;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::Character( const Character &character) : _name(character.getName() + "_copy") {
    std::cout << YELLOW << "Character copy constructor called!" << RESET << std::endl;
    for(int i = 0; i < 4; i++)
        if (character._inventory[i])
            this->_inventory[i] = character._inventory[i]->clone();
    std::cout << YELLOW << "A character named \"" << this->_name << "\" was created from copy of " << character._name << RESET << std::endl;
}

Character::~Character( void ) {
    std::cout << YELLOW << "Character destructor called!" << RESET << std::endl;
    for(int i = 0; i < 4; i++)
        if (this->_inventory[i]) {
            delete this->_inventory[i];
            this->_inventory[i] = 0;
        }
}

Character &Character::operator=( const Character &character) {
    if (this != &character) {
        for(int i = 0; i < 4; i++) {
            if (this->_inventory[i]) {
                delete this->_inventory[i];
                this->_inventory[i] = 0;
            }
            if (character._inventory[i])
                this->_inventory[i] = character._inventory[i]->clone();
        }
    }
    std::cout << YELLOW << "Character assignment operator called!" << RESET << std::endl;
    return *this;
}

void Character::equip( AMateria *m ) {
    if (!m) {
        std::cout << YELLOW << "You can't equip a null materia!" << RESET << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            std::cout << YELLOW << "Materia " << m->getType() << " equipped!" << RESET << std::endl;
            break;
        }
        if (i == 4) {
            std::cout << YELLOW << "You can't equip more than 4 materia!" << RESET << std::endl;
            return;
        }
    }
}

void Character::unequip( int idx ) {
    if (idx < 0 || idx > 3) {
        std::cout << YELLOW << "Invalid index!" << RESET << std::endl;
    }
    else if (this->_inventory[idx]) {
        // AMateria *ptr = this->_inventory[idx];
        std::cout << YELLOW << "Materia " << this->_inventory[idx]->getType() << " unequipped!" << RESET << std::endl;
        this->_inventory[idx] = 0;
    }
    else
        std::cout << YELLOW << "No materia equipped at index " << idx << "!" << RESET << std::endl;
}

void Character::use( int idx, ICharacter &target ) {
    if (idx < 0 || idx > 3) {
        std::cout << YELLOW << "Invalid index!" << RESET << std::endl;
    }
    else if (this->_inventory[idx]) {
        std::cout << YELLOW << "Using materia " << this->_inventory[idx]->getType() << " on " << target.getName() << "!" << RESET << std::endl;
        this->_inventory[idx]->use(target);
    }
    else
        std::cout << YELLOW << "No materia equipped at index " << idx << "!" << RESET << std::endl;
}

AMateria *Character::getMateria( int idx ) const {
    return this->_inventory[idx];
}

std::string const & Character::getName() const {
	return (this->_name);
}