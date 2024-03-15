/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:04:46 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 22:20:41 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "defines.h"
#include <iostream>

Harl::Harl( void ) {
    std::cout << "Harl is here!" << std::endl;
}

Harl::~Harl( void ) {
    std::cout << "Harl is gone!" << std::endl;
}

void Harl::_debug( void ) {
    std::cout << GREEN << DEBUG << RESET << std::endl;
}

void Harl::_info( void ) {
    std::cout << BLUE << INFO << RESET << std::endl;
}

void Harl::_warning( void ) {
    std::cout << YELLOW << WARNING << RESET << std::endl;
}

void Harl::_error( void ) {
    std::cout << RED << ERROR << RESET << std::endl;
}

void Harl::complain(std::string level) {
    member_func_pointers funcs[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
        if (levels[i] == level)
            (this->*funcs[i])();
}