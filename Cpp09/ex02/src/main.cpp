/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:37:37 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/26 16:08:21 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	if (argc <= 1) {
		std::cerr << "Usage: " << argv[0] << " <sequence of numbers devided by space>" << std::endl;
		return 1;
	}
	std::ostringstream oss;
    for (int i = 1; i < argc; ++i) {
        if (i != 1) oss << " ";
        oss << argv[i];
    }
    std::string numbers = oss.str();
    PmergeMe pmerge(numbers);
	return 0;
}