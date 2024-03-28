/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:14:29 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/28 17:41:34 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

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
	std::cout << "top-> ";
	while (!copy.empty()) {
		std::cout << copy.top() << " ";
		copy.pop();
	}
	std::cout << "<-bottom" << std::endl;
}

void	RPN::evaluate(std::string &expression) {
	if (expression.find_first_not_of("0123456789+-/* ") != std::string::npos)
		throw (std::runtime_error("Error!"));
	int countNumbers = 0;
	std::stringstream ss(expression);
	std::string token;
	while (std::getline(ss, token, ' ')) {
		if (DEBUG)
			this->printStack();
		if (isdigit(token[0])) {
			countNumbers++;
			if (countNumbers > 10)
				throw (std::runtime_error("Error!"));
			if (token.find_first_not_of("0123456789") != std::string::npos)
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
		case '+': _numStack.push(b + a); break;
		case '-': _numStack.push(b - a); break;
		case '*': _numStack.push(b * a); break;
		case '/':
			if (a == 0)
				return false;
			else
				_numStack.push(b / a);
			break;
	}
	return true;
}

