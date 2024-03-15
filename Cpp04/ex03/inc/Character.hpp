/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:32:21 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/11 09:05:56 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];
    public:
        Character( void );
        Character( std::string name );
        Character( const Character &character );
        ~Character( void );
        Character &operator=( const Character &character );

        std::string const & getName() const;
        AMateria *getMateria( int idx ) const;
        
        void equip( AMateria *m );
        void unequip( int idx );
        void use( int idx, ICharacter &target );
};

