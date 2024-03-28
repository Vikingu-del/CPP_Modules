/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:05:20 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/28 15:57:34 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		BitcoinExchange bitc(argv[1]);
	} else
		std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
	return 0;
}
