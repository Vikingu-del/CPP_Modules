/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 03:59:46 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 04:07:06 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPtr = &string;
    std::string &refPtr = string;

    std::cout << "Memory address of the string: " << &string << std::endl;
    std::cout << "Memory address held by the stringPtr: " << stringPtr << std::endl;
    std::cout << "Memory address held by the refPTR: " << &refPtr << std::endl;
    
    std::cout << "String value: " << string << std::endl;
    std::cout << "Value pointed to by stringPtr: " << *stringPtr << std::endl;
    std::cout << "Value pointed to by refPTR: " << refPtr << std::endl;
    
    return (0);
}