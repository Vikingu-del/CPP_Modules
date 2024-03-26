/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:37:37 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/26 12:16:05 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc <= 1) {
        std::cerr << "Usage: " << argv[0] << " <sequence of numbers devided by space>" << std::endl;
        return 1;
    }
    std::string numbers;
    int i = 1;
    while (argv[i])
        numbers += (" " + std::string(argv[i++]));
    // std::cout << numbers << std::endl;
    PmergeMe pmerge(numbers);
    return 0;
}