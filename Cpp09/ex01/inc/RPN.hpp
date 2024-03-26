/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:42:40 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/26 09:12:36 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <sstream>

class RPN {
public:
    RPN();
    RPN(std::string& str);
    ~RPN();
    // methods
    void evaluate(std::string &expression);
    void printStack();
    bool performOperation(char &c);
private:
    RPN(const RPN& src);
    RPN& operator=(const RPN& src);
    std::string _expression;
    std::stack<int> _numStack;
};

bool containsOnlyAllowedChars(const std::string & str);
