/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 01:42:27 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 03:27:45 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"

void Zombie::setName( std::string name ) {
    this->_name = name;
}

const std::string& Zombie::getName( void ) const {
    return this->_name;
}

void Zombie::announce( void ) {
    const std::string& name = this->getName();
    std::cout << YELLOW << name << " BraiiiiiiinnnzzzZ...🧠" << RESET << std::endl;
}

Zombie::~Zombie() {
    std::cout << RED << "Zombie " << this->_name << " has been destroyed 💀" << RESET << std::endl;
}
