/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:04:46 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 23:00:24 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "defines.h"
#include <iostream>

Harl::Harl(std::string level) : _level(level) {
    return ;
}

Harl::~Harl( void ) {
    return ;
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
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") {
        std::cout << INVALID << std::endl;
        return ;
    }
    switch (level[0]) {
        case 'D':
            (this->*funcs[0])();
        case 'I':
            (this->*funcs[1])();
        case 'W':
            (this->*funcs[2])();
        case 'E':
            (this->*funcs[3])();
            return ;
    }
}