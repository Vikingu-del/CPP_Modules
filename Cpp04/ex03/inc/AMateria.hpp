/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:00:50 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/11 12:46:38 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "defines.h"
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
        std::string _type;
    public:
        AMateria( std::string const &type );
        virtual ~AMateria( void );
        std::string const &getType( void ) const;
        virtual AMateria *clone( void ) const = 0;
        virtual void use( ICharacter &target );
};
