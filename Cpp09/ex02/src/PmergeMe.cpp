/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:37:02 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/27 17:08:28 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const std::string& str) : _numbers(str) {
	try {
		this->parse();
	} catch (std::runtime_error &e) {
		std::cerr << e.what() << std::endl;
		return ;
	}
	this->FJMIsort();
}

void PmergeMe::parse() {
    if (this->_numbers.find_first_not_of("0123456789 ") != std::string::npos) throw std::runtime_error("Error!");
    std::istringstream iss(this->_numbers);
    std::string num;
    while (iss >> num) {
		unsigned long long int parsedNum = strtoull(num.c_str(), NULL, 10);
		if (parsedNum == ULLONG_MAX && num != "18446744073709551615")
			throw std::runtime_error("Error: Number out of range!");
		this->_numDeq.push_back(parsedNum); 
	}
	if (this->_numDeq.size() == 0) throw std::runtime_error("Error!");
	if (!this->checkDups()) throw std::runtime_error("Error: Duplicates!");
	if (std::count(this->_numDeq.begin(), this->_numDeq.end(), 0)) throw std::runtime_error("Error: Only numbers above 0!");
	if (this->_numDeq.size() == 1) {
		std::ostringstream oss;
		oss << *_numDeq.begin();
		throw std::runtime_error(oss.str());
	}
	std::cout << RED << "Before: "; this->printDeq(this->_numDeq); std::cout << RESET;
}

void PmergeMe::printDeq(std::deque<unsigned long long int>& deq) {
	for (std::deque<unsigned long long int>::iterator it = deq.begin(); it != deq.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::printVec() {
	std::cout << std::endl << "Vector of pairs" << std::endl;
	for (std::vector< std::pair< unsigned long long int, unsigned long long int > >::iterator it = this->_numVec.begin(); it != _numVec.end(); it++)
		std::cout << "first: " << it->first << "  second: " << it->second << std::endl;
}

bool PmergeMe::checkDups(){
	for (std::deque<unsigned long long int>::iterator it = this->_numDeq.begin(); it != this->_numDeq.end(); it++) {
		int dups = std::count(this->_numDeq.begin(), this->_numDeq.end(), *it);
		if ( dups > 1 ) { return false; } 
	}
	return true;
}

void	PmergeMe::mergeSort() {		
	for (std::vector< std::pair< unsigned long long int, unsigned long long int > >::iterator it = this->_numVec.begin(); it != _numVec.end(); it++) {
		if (it->second < it->first)
			std::swap(it->first, it->second);
	}
	if (DEBUG) {
		std::cout << CYAN;
		this->printVec();
		std::cout << RESET;
	}
	this->mergeSBLV(0, this->_numVec.size() - 1);
	if (DEBUG) {
		std::cout << PURPLE;
		this->printVec();
		std::cout << RESET;
	}
	this->_sortedDeq.push_back(this->_numVec.begin()->first);
	this->_sortedDeq.push_back(this->_numVec.begin()->second);
	for (std::vector< std::pair< unsigned long long int, unsigned long long int > >::iterator it = this->_numVec.begin() + 1; it != _numVec.end(); it++) {
		this->_sortedDeq.push_back(it->second);
		this->_unsortedDeq.push_back(it->first);
	}
	if (DEBUG) {
		std::cout << std::endl << "After the merge sort " << std::endl;
		std::cout << CYAN << "Sorted sequence: ";
		this->printDeq(this->_sortedDeq);
		std::cout << RED << "Unsorted sequence: ";
		this->printDeq(this->_unsortedDeq);
		std::cout << RESET;
	}
	this->_firstDeqSize = this->_sortedDeq.size();
}

// SBLV stands for Sort By Longest Value which are (for each element of pair in vector) it -> it->second
void	PmergeMe::mergeSBLV(int start, int end) {
	if (start < end) {
		int mid = start + (end - start) / 2;
		this->mergeSBLV(start, mid);
		this->mergeSBLV(mid + 1, end);
		this->merge(start, mid, end);
	}
}

void	PmergeMe::merge(int start, int mid, int end) {
	int size1 = mid - start + 1;
	int size2 = end - mid;
	std::vector< std::pair< unsigned long long int, unsigned long long int > > left(size1), right(size2);
	for (int i = 0; i < size1; ++i)
		left[i] = this->_numVec[start + i];
	for (int j = 0; j < size2; ++j)
		right[j] = this->_numVec[mid + 1 + j];
	int i = 0, j = 0, k = start;
	while (i < size1 && j < size2) {
		if (left[i].second < right[j].second)
			this->_numVec[k] = left[i++];
		else
			this->_numVec[k] = right[j++];
		++k;
	}
	while (i < size1)
		this->_numVec[k++] = left[i++];
	while (j < size2)
		this->_numVec[k++] = right[j++];
}

void PmergeMe::insertSort() {
	for (unsigned long long int i = 0; i < this->_unsortedDeq.size(); ++i) {
		std::deque<unsigned long long int>::iterator pos;
		pos = std::lower_bound(this->_sortedDeq.begin(), this->_sortedDeq.end(), this->_unsortedDeq[i]);
		if (DEBUG) {
			std::cout << CYAN << "to sort " << this->_unsortedDeq[i] << " before the number: " << *pos << RESET << std::endl;
		}
		this->_sortedDeq.insert(pos, this->_unsortedDeq[i]);
		if (DEBUG) {
			std::cout << PURPLE; printDeq(this->_sortedDeq); std::cout << RESET;
		}
	}
	if (*(this->_sortedDeq.begin()) == 0 )
		this->_sortedDeq.pop_front();
}


// stands for Ford-Johnson-merge-insert sort
void	PmergeMe::FJMIsort() {
	clock_t mergeStart = clock();
	unsigned long long int store = 0;
	if (this->_numDeq.size() % 2 != 0) {
		store = this->_numDeq.back();
		this->_numDeq.pop_back();
	}
	for (std::deque<unsigned long long int>::iterator it = this->_numDeq.begin(); it != _numDeq.end(); it += 2)
		this->_numVec.push_back(std::make_pair(*it, *(it + 1)));
	if (store != 0)
		this->_numVec.push_back(std::make_pair(0, store));
	if (DEBUG) {
		this->printVec();
		std::cout << std::endl << "stored value: " << store << std::endl;
	}
	this->mergeSort();
	clock_t mergeEnd = clock();
	this->_mergeTime = static_cast<double>(mergeEnd - mergeStart) / CLOCKS_PER_SEC;
	clock_t insertStart = clock();
	this->insertSort();
	clock_t insertEnd = clock();
	this->_insertTime = static_cast<double>(insertEnd - insertStart) / CLOCKS_PER_SEC;
	std::cout << GREEN << "After: "; this->printDeq(this->_sortedDeq);
	std::cout << CYAN << "Time to process a range of " << this->_numVec.size() << " elements with std::vector<usnigned lon lon int, unsinge long long int>: "  << this->_mergeTime << "us." << std::endl;
	std::cout << PURPLE << "Time to process a range of " << this->_unsortedDeq.size() << " elements with std::deque<usnigned>: "  << this->_insertTime << "us." << std::endl;
}