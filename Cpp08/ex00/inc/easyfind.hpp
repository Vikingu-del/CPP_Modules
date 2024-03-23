/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:59:25 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/23 13:29:02 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iterator>
#include <iostream>
#include <stdexcept> // For std::runtime_error

template<typename T>
void easyfind(T& container, int nr) {
    typename T::iterator it = container.begin();
    typename T::iterator eit = container.end();
    for (typename T::iterator i = it; i != eit; i++) {
        if (*i == nr) {
            std::cout << "Found number" << std::endl;
            return ;
        }
    }
    throw std::runtime_error("Number not found");
}
