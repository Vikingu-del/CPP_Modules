/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 02:06:22 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 03:28:20 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
    Zombie *bar = newZombie("barZombie");
    randomChump("randomChumpZombie");
    bar->announce();
    delete bar;
    return (0);
}

