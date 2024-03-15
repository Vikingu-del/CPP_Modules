/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 02:06:22 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 03:46:03 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 5

int main( void ) {
    Zombie *zombieList = zombieHorde(N, "zombieHorde");
    Zombie *bar = newZombie("barZombie");
    randomChump("randomChumpZombie");
    for (int i = 0; i < N; i++) {
        zombieList[i].announce();
    }
    bar->announce();
    delete[] zombieList;
    delete bar;
    return (0);
}

