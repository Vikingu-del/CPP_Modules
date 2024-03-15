/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 03:03:07 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/13 20:29:45 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "SkavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public SkavTrap, public FragTrap {
    private:
        std::string _name;
    public:
        DiamondTrap( void );
        DiamondTrap( const std::string& name );
        DiamondTrap( const DiamondTrap& d );
        ~DiamondTrap();
        DiamondTrap& operator=( const DiamondTrap& d);
        // void whoAmI( void ) const;
        void setHitPoints( void );
        void setEnergyPoints( void );
        void setAttackDamage( void );
        void whoAmI( void ) const;
        using SkavTrap::attack;
        
};
