/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:19:17 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/08 16:28:08 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap clap0;
    // ClapTrap clap1("Erik");
    // ClapTrap clap2(clap1);
    // clap0 = clap2;

    clap0.attack("enemy");
    clap0.takeDamage(5);
    clap0.takeDamage(5);
    clap0.takeDamage(5);
    clap0.takeDamage(5);
    clap0.beRepaired(5);
    clap0.takeDamage(5);
    return 0;
}
