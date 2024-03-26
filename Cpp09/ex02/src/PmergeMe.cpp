/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:37:02 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/26 13:36:21 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const std::string& str) : _numbers(str) {
	try {
		parse();
	} catch (std::runtime_error &e) {
		std::cerr << e.what() << std::endl;
		return ;
	}
	
}

void PmergeMe::parse() {
    if (this->_numbers.find_first_not_of("0123456789+ ") != std::string::npos)
        throw std::runtime_error("Error!");

    std::istringstream iss(this->_numbers);
    std::string num;
    while (iss >> num) { this->_numDeq.push_back(atoi(num.c_str())); }
	if (this->_numDeq.size() == 0)
		throw std::runtime_error("Error!");
    this->printDeq();
}

void PmergeMe::printDeq() {
	for (std::deque<unsigned long long int>::iterator it = this->_numDeq.begin(); it != _numDeq.end(); it++)
		std::cout << *it << std::endl;
}

void PmergeMe::sort() {
	
}