/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:37:26 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 15:54:15 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name),
                                                    _weapon(weapon) { 
    return ;
}

void HumanA::atack( void ) const {
    std::cout << GREEN << this->_name << " attacks with their " << this->_weapon.getType() << RESET << std::endl;
    return ;
}

