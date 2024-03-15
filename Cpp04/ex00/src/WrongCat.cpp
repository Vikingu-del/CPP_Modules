/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:06:36 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 19:08:02 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
    std::cout << YELLOW << "WrongCat default constructor called!" << RESET << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &Wrongcat ) : WrongAnimal( Wrongcat ) {
    this->type = Wrongcat.type;
    std::cout << YELLOW << "WrongCat copy constructor called!" << RESET << std::endl;
}

WrongCat::~WrongCat( void ) {
    std::cout << YELLOW << "WrongCat destructor called!" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& Wrongcat) {
    if (this != &Wrongcat)
        *this = Wrongcat;
    std :: cout << YELLOW << "WrongCat assignment operator called!" << RESET << std::endl;
    return *this;
}

void WrongCat::makeSound( void ) const {
    std::cout << YELLOW << "WrongCat sound! Miau!" << RESET << std::endl;
}