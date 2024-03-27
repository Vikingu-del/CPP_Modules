/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:13:31 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/27 17:03:15 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <deque>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include "defines.h"
#include  <climits> 

#ifndef DEBUG
#define DEBUG 0
#endif

class PmergeMe {
public:
    PmergeMe() {};
    ~PmergeMe() {};
    PmergeMe(const std::string& str);
    // parsing
    void parse();
    bool checkDups();
    // Ford-Johnson merge-insert
    void FJMIsort();
    // merge sort
    void mergeSort();
    void mergeSBLV(int start, int end);
    void merge(int start, int mid, int end);
    // insert sort
    void insertSort();
    // debuggers
    void printDeq(std::deque<unsigned long long int>& deq);
    void printVec();
private:
    PmergeMe& operator=(const PmergeMe& src) { (void) src; return *this; };
    PmergeMe(const PmergeMe& src) { (void) src; };
    std::string _numbers;
    std::vector< std::pair< unsigned long long int, unsigned long long int > > _numVec;
    std::deque<unsigned long long int> _numDeq;
    std::deque<unsigned long long int> _sortedDeq;
    std::deque<unsigned long long int> _unsortedDeq;
    double _mergeTime;
    double _insertTime;
    int _firstDeqSize;
};