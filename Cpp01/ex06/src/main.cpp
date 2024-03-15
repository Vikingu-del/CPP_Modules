/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:30:33 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 22:59:02 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 2 || argv[1][0] == '\0') {
        std::cout << YELLOW << USAGE << RESET << std::endl;
        return (1);
    }
    Harl harl(argv[1]);
    harl.complain(argv[1]);
    return (0);
}