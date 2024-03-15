/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 02:25:46 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 03:44:13 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>


Zombie* zombieHorde( int N, std::string name ) {
    Zombie *z = new Zombie[N];
    for (int i = 0; i < N; i++) {
        std::stringstream ss;
        ss << i;
        z[i].setName(name + ss.str());
    }
    return z;
}
