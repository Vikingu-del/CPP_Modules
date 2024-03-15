/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:19:17 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 02:39:37 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {
    FragTrap frag0( "Erik" );

    frag0.highFivesGuys();
    frag0.attack( "enemy ");
    frag0.takeDamage( 30 );
    frag0.beRepaired( 10 );
    frag0.takeDamage( 100 );
    frag0.takeDamage( 20 );
    frag0.beRepaired( 10 );
    frag0.takeDamage( 100 );
    frag0.takeDamage( 20 );
    
    return 0;
}
