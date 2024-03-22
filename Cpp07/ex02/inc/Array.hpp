/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:20:45 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/22 13:59:13 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>

template<typename T>
class Array {
private:
    T* _arr;
    unsigned int _size;
public:
    Array( void );
    Array( unsigned int n );
    Array( const Array& src);
    ~Array( void );
    Array &operator=( const Array& src );
    T& operator[](unsigned int index);
    unsigned int size() const;
    T &getArr();
};