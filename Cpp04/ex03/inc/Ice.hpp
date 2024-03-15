/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:39:57 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/10 22:31:42 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
    private:
        std::string _type;
    public:
        Ice( void );
        Ice( const Ice &ice );
        ~Ice( void );
        Ice &operator=( const Ice &ice);
        Ice *clone( void ) const;
        void use( ICharacter &target );
};
