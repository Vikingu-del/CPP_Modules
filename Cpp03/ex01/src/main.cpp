/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:19:17 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 02:19:56 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "SkavTrap.hpp"

int main( void ) {
    SkavTrap skav0( "Edvinas" );
    skav0.attack( "enemy" );
    skav0.takeDamage( 12 );
    skav0.beRepaired( 1 );
    skav0.GuardGate();
    return 0;
}
