/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:39:22 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 22:31:58 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
    private:
        std::string _type;
    public:
        Cure( void );
        Cure( const Cure &cure );
        ~Cure( void );
        Cure &operator=( const Cure &cure);
        std::string const &getType( void ) const;
        Cure *clone( void ) const;
        void use( ICharacter &target );
};
