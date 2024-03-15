/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:22:17 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/05 14:17:18 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void ) {
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.atack();
        club.setType("some other type of club");
        bob.atack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.atack();
        club.setType("some other type of club");
        jim.atack();
    }
    return 0;
}
