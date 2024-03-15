/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:58:28 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 16:32:46 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap {
    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        ClapTrap( void );
        ClapTrap( const std::string name );
        ClapTrap( const ClapTrap &clap);
        ~ClapTrap( void );
        ClapTrap &operator=(const ClapTrap &clap);
        // Member functions
        void attack(const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
};