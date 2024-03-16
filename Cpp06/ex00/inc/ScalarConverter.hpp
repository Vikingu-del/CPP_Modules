/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segfault <segfault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:29:07 by segfault          #+#    #+#             */
/*   Updated: 2024/03/16 16:30:30 by segfault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ScalarConverter {
    public:
        ScalarConverter();
        ScalarConverter(std::string const &value);
        ScalarConverter(ScalarConverter const &src);
        ~ScalarConverter();

        ScalarConverter &operator=(ScalarConverter const &rhs);

        void convert();
        void printChar();
        void printInt();
        void printFloat();
        void printDouble();    
};
