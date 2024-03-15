/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:19:17 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 05:23:37 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {
    DiamondTrap diamond("Erik");
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.attack( "enemy" );
    diamond.whoAmI();
    diamond.takeDamage( 100 );
    diamond.takeDamage( 20 );
    diamond.beRepaired( 10 );
    diamond.GuardGate();
    diamond.highFivesGuys();
    
    return 0;
}
