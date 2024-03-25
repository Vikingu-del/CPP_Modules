/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segfault <segfault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:13:56 by segfault          #+#    #+#             */
/*   Updated: 2024/03/25 22:49:00 by segfault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>

bool containsOnlyAllowedChars(const std::string & str) {
    std::string allowedChars = "0123456789+-/* ";
    for (std::string::const_iterator i = str.begin(); i < str.end(); i++) {
        char c = *i;
        if (allowedChars.find(c) == std::string::npos) {
            std::cerr << "Error" << std::endl;
            return false;
        }
    }
    return true;
}

bool evaluate(std::string &expression) {
    std::stack<int> numStack;
    std::stringstream ss(expression);
    std::string token;
    while (std::getline(ss, token, ' ')) {
        if (isdigit(token[0]))
            numStack.push(atoi(token.c_str()));
        else {
            // handle operators
            char c = token[0];
            // pop numbers from stack, apply operator, push result back
            // handle errors (e.g., not enough numbers for operator)
        }
        // at the end, if the expression is valid, there should be exactly one number left on the stack
        if (numStack.size() != 1) {
            std::cerr << "Error!" << std::endl;
            return false;
        }
        std::cout << numStack.top() << std::endl;
        return true;
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << "\"<expression>\"" << std::endl;
        return 1;
    }
    std::string expression = argv[1];
    if (!containsOnlyAllowedChars(expression) || !evaluate(expression))
        return 1;
    return 0;
}

