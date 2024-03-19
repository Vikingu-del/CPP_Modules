/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:22:49 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 14:36:58 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include "defines.h"
#include <cstdlib>

Base *generate(void) {
    srand(static_cast<unsigned int>(time(0)));
    int i = rand() % 3;
    if (i == 0) {
        std::cout << "A class generated" << std::endl;
        return new A;
    } else if (i == 1) {
        std::cout << "B class generated" << std::endl;
        return new B;
    } else {
        std::cout << "C class generated" << std::endl;
        return new C;
    }
}

void identify(Base *p) {
    if (!p)
        std::cout << YELLOW << "NULL pointer" << RESET << std::endl;
    else if (dynamic_cast<A*>(p))
        std::cout << GREEN << "Indetified A by using pointer" << RESET << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << GREEN << "Indetified B by using pointer" << RESET << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << GREEN << "Indetified C by using pointer" << RESET << std::endl;
    else
        std::cout << YELLOW << "Unknown type" << RESET << std::endl;
}

void identify(Base &p) {
    try {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << CYAN << "Indetified A by using reference" << RESET << std::endl;
        return;
    }
    catch (...) {
        std::cerr << RED << "Trying to cast from Base& to A& which is not correct" << RESET << std::endl;
    }
    try {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << CYAN << "Indetified B by using reference" << RESET << std::endl;
        return;
    }
    catch (...) {
        std::cerr << RED << "Trying to cast from Base& to B& which is not correct" << RESET << std::endl;
    }
    try {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << CYAN << "Indetified C by using reference" << RESET << std::endl;
        return;
    }
    catch (...) {
        std::cerr << RED << "Trying to cast from Base& to C& which is not correct" << RESET << std::endl;
    }
    std::cerr << MAGENTA << "Uknown type" << RESET << std::endl;
}