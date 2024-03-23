/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:59:09 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/23 18:28:21 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);
    // int myints[] = {6, 3, 17, 9, 11};
    // std::vector<int> vec(myints, myints+5);
    // try {
    //     sp.addNumbers(vec);
    // } catch (std::runtime_error &e) {
    //     std::cout << e.what() << std::endl;
    // }
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try {
        std::cout << sp.shortestSpan() << std::endl;
    } catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}