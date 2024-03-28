/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:42:40 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/28 17:35:53 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <sstream>

#ifndef DEBUG
#define DEBUG 0
#endif

class	RPN {
public:
	RPN() {};
	RPN(std::string& str);
	~RPN() {};
	// methods
	void evaluate(std::string &expression);
	void printStack();
	bool performOperation(char &c);
private:
	RPN(const RPN& src) { (void) src; };
	RPN& operator=(const RPN& src) { (void) src; return *this; };
	std::string _expression;
	std::stack<unsigned long long int> _numStack;
};

