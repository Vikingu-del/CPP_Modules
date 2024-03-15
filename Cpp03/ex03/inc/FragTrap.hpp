/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 02:21:14 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 04:58:09 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap( void );
        FragTrap( const std::string name );
        FragTrap( const FragTrap &clap);
        ~FragTrap( void );
        FragTrap &operator=( const FragTrap &clap );
        // Member functions
        void highFivesGuys(void);
        void attack( const std::string& target );
};