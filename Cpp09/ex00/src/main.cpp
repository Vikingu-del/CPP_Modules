/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:05:20 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/25 17:36:12 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		std::map<std::string, double> dbCsv;
		if (!parse(argv, dbCsv))
			return 1;
	} else
		std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
	return 0;
}
