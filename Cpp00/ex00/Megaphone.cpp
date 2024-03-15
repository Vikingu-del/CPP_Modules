/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:41:42 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/02 19:48:59 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++) {
			std::string str(argv[i]);
			for (std::size_t j = 0; j < str.size(); j++) {
				std::cout << (char)toupper(str[j]);
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
