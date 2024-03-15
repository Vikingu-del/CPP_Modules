/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:09:08 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 20:40:29 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include "defines.h"

Brain::Brain( void ) {
    std::cout << RED << "Brain constructor called" << RESET << std::endl;
    return ;
}

Brain::Brain( const Brain &brain ) {
    *this = brain;
    std::cout << RED << "Brain copy constructor called" << RESET << std::endl;
}

Brain::~Brain( void ) {
    std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& brain) {
    if (this != &brain)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    std :: cout << RED << "Brain assignment operator called" << RESET << std::endl;
    return *this;
}
