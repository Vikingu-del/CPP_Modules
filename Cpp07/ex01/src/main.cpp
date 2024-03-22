/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:51:29 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/22 11:20:54 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
    int int_arr[5] = {1, 2, 3 ,4 , 5};
    char char_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    std::string str_arr[5] = {"erik", "seferi", "dora", "vete", "42"};

    std::cout << GREEN << "Before incrementing: " << RESET << std::endl;
    std::cout << MAGENTA << "Integers arrays: " << RESET << std::endl;
    iter(int_arr, 5, print<int>);
    std::cout << std::endl << "Characters array: " << std::endl;
    iter(char_arr, 5, print<char>);
    std::cout << YELLOW << std::endl << "Strings array: " << RESET << std::endl;
    iter(str_arr, 5, print<std::string>);
    std::cout << std::endl << std::endl;
    
    std::cout << std::endl << RED << "Incrementing each element... " << RESET << std::endl << std::endl;
    
    iter(int_arr, 5, process<int>); 
    iter(char_arr, 5, process<char>); 
    iter(str_arr, 5, process<std::string>); 

    std::cout << GREEN << "After incrementing: " << RESET << std::endl;
    std::cout << MAGENTA << "Integers arrays: " << RESET << std::endl;
    iter(int_arr, 5, print<int>);
    std::cout << std::endl << "Characters array: " << RESET << std::endl;
    iter(char_arr, 5, print<char>);
    std::cout << YELLOW << std::endl << "Strings array: " << RESET << std::endl;
    iter(str_arr, 5, print<std::string>);
}