/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:13:16 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/22 16:29:01 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <iostream>
#include <sstream>

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	my_templates::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << my_templates::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << my_templates::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	my_templates::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << my_templates::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << my_templates::max( c, d ) << std::endl;
// 	return 0;
// }

int main(void) {
    while (42) {
        std::cout << "Enter one type you wont to play (<string>, <char>, <int>, <float>, <double>) : ";
        std::string command;
        std::getline(std::cin, command);
        std::istringstream iss(command);
        std::string type;
        if (iss >> type) {
			if (type == "string") {
				if (get_string())
					break ;
			}
			else if (type == "char") {
				if (get_char())
					break ;
			}
			else if (type == "int") {
				if (get_int())
					break ;
			}
			else if (type == "float") {
				if (get_float())
					break ;
			}
			else if (type == "double") {
				if (get_double())
					break ;
			}
			else if (type == "exit")
				break ;
			else
				std::cout << "incorrect type" << std::endl;
				
        }
        else if (std::cin.eof())
            break;
    } 
    return 0;
}