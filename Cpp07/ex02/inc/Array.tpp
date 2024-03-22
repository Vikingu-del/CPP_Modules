/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:41:05 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/22 14:09:06 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0) {}

template<typename T>
Array<T>::Array( unsigned int n) : _size(n) {
    this->_arr = new T[this->_size];
    for (size_t i = 0; i < this->_size; ++i)
        this->_arr[i] = T(); // Default initialization
}

template<typename T>
Array<T>::Array( const Array& src) : _size(src._size) {
    this->_arr = new T[this->_size]; // allocate new array
    for (size_t i = 0; i < this->_size; ++i) 
        this->_arr[i] = src._arr[i]; // copy each element of array
}

template<typename T>
Array<T>::~Array() { delete[] _arr; }

template<typename T>
T& Array<T>::operator[]( unsigned int index) {
    if (index >= this->_size || index < 0)
        throw std::out_of_range("Index out of bounts");
    return this->_arr[index];
}

template<typename T>
unsigned int Array<T>::size() const {
    return this->_size;
}

template<typename T>
Array<T> &Array<T>::operator=( const Array& src ) {
    if (this != &src) {
        delete[] _arr;
        this->_size = src._size;
        this->_arr = new T[_size];
        for (size_t i = 0; i < _size; ++i)
            this->_arr[i] = src._arr[i];
    }
    return *this;
}

template<typename T>
T& Array<T>::getArr() {
    return *(this->_arr);
}