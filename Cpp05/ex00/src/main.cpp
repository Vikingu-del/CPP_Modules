/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:22:51 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/13 12:43:42 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bob = Bureaucrat("Bob", -4);
    } catch (...) {};

    Bureaucrat alice = Bureaucrat("Alice", 150);
    std::cout << alice;
    decrement_byro(alice);
    std::cout << alice;
    increment_byro(alice);
    std::cout << alice;
    
    Bureaucrat charlie = Bureaucrat("Charlie", 1);
    Bureaucrat dave;
    dave = charlie;
    std::cout << dave;
    increment_byro(dave);
    std::cout << dave;

    try {
        Bureaucrat eve = Bureaucrat("Eve", 0);
    } catch (...) {};

    return 0;
}