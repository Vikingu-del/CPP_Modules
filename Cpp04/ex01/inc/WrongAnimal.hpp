/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:56:56 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 19:16:11 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "defines.h"

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal( const WrongAnimal &wrong_animal );
        WrongAnimal( std::string type );
        virtual ~WrongAnimal( void );
        WrongAnimal &operator=( const WrongAnimal &wrong_animal);
        std::string getType( void ) const;
        void setType( std::string type );
        virtual void makeSound( void ) const;
};

