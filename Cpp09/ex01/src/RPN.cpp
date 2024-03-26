/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:14:29 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/26 10:34:13 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const RPN& src) : _expression(src._expression), _numStack(src._numStack) {}
RPN::~RPN() {}
RPN& RPN::operator=(const RPN& src) {
	if (this != &src) {
		this->_expression = src._expression;
		this->_numStack = src._numStack;
	}
	return *this;
}

RPN::RPN(std::string& str) : _expression(str) {
	try {
		this->evaluate(this->_expression);
	}
	catch (std::runtime_error &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	RPN::printStack() {
	std::stack<unsigned long long int> copy = _numStack;
	while (!copy.empty()) {
		std::cout << copy.top() << " ";
		copy.pop();
	}
	std::cout << std::endl;
}

void	RPN::evaluate(std::string &expression) {
	if (!this->containsOnlyAllowedChars(expression))
		throw (std::runtime_error("Error!"));
	int countNumbers = 0;
	std::stringstream ss(expression);
	std::string token;
	while (std::getline(ss, token, ' ')) {
		if (isdigit(token[0])) {
			countNumbers++;
			if (countNumbers > 10)
				throw (std::runtime_error("Error!"));
			this->_numStack.push(atoi(token.c_str()));
		}
		else if (token.size() == 1 && std::string("+-*/").find(token) != std::string::npos) {
			if (!this->performOperation(token[0]))
				throw (std::runtime_error("Error!"));   
		}
		else
			throw (std::runtime_error("Error!"));
	}
	if (this->_numStack.size() != 1)
		throw (std::runtime_error("Error!"));
	std::cout << this->_numStack.top() << std::endl;
}

bool	RPN::performOperation(char &c) {
	if (this->_numStack.size() < 2)
		return false;
	unsigned long long int a = this->_numStack.top();
	this->_numStack.pop();
	unsigned long long int b = this->_numStack.top();
	this->_numStack.pop();
	switch (c) {
		case '+': _numStack.push(a + b); break;
		case '-': _numStack.push(a - b); break;
		case '*': _numStack.push(a * b); break;
		case '/':
			if (b == 0)
				return false;
			else
				_numStack.push(a / b);
			break;
	}
	return true;
}

bool	RPN::containsOnlyAllowedChars(const std::string & str) {
	std::string allowedChars = "0123456789+-/* ";
	for (std::string::const_iterator i = str.begin(); i != str.end(); i++) {
		char c = *i;
		if (allowedChars.find(c) == std::string::npos)
			return false;
	}
	return true;
}

