/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SkavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:23:00 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 16:43:41 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class SkavTrap : public ClapTrap {
    public:
        SkavTrap( void );
        SkavTrap( const std::string name );
        SkavTrap( const SkavTrap &clap);
        ~SkavTrap( void );
        SkavTrap &operator=( const SkavTrap &clap );
        // // Member functions
        void GuardGate( void );
        void attack( const std::string& target );
};