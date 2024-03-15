/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:31:17 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/05 14:19:37 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name),
                                    _weapon(NULL) {
    return ;
}

HumanB::~HumanB() {
    return ;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void HumanB::atack( void ) const {
    std::cout << RED << this->_name << " attacks with their " << this->_weapon->getType() << RESET << std::endl;
}