/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:38:13 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 10:38:26 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "defines.h"

int main( int ac, char **av ) {
    if (ac != 2) {
        std::cout << RED << "Usage: ./convert [value]" << RESET << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);
    return 0;
}