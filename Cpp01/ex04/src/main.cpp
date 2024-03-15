/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:20:07 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/05 14:24:59 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Data.hpp"

int main(int argc, char const *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: ./Sed_is_for_losers <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    if (argv[1][0] == 0 || argv[2][0] == 0)
    {
        std::cerr << "Error: Empty strings" << std::endl;
        return (0);
    }
    Data data(argv[1], argv[2], argv[3]);
    data.replaceCustom();
    return (0);
}
