/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:16:19 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 15:25:53 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    return ;
}
const std::string& Weapon::getType( void ) const {
    return (this->_type);
}
void Weapon::setType(std::string type) {
    this->_type = type;
    return ;
}
