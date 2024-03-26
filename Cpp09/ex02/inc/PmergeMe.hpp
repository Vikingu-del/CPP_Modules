/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:13:31 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/26 13:28:36 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <deque>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

class PmergeMe {
public:
    PmergeMe() {};
    ~PmergeMe() {};
    PmergeMe(const std::string& str);
    void parse();
    void sort();
    void printDeq();
private:
    PmergeMe& operator=(const PmergeMe& src) { (void) src; return *this; };
    PmergeMe(const PmergeMe& src) { (void) src; };
    std::string _numbers;
    std::vector< std::pair< unsigned long long int, unsigned long long int > > _numVec;
    std::deque<unsigned long long int> _numDeq;
};