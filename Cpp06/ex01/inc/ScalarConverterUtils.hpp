/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtils.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:48:43 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/18 11:21:43 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>

namespace ScalarConverterUtils {
	float stringToFloat( const std::string &str ) {
		std::stringstream iss(str);
		float result;
		if (!(iss >> result))
			throw std::invalid_argument("Invalid argument");
		return result;
	}
	double stringToDouble( const std::string &str ) {
		std::stringstream iss(str);
		double result;
		if (!(iss >> result))
			throw std::invalid_argument("Invalid argument");
		return result;
	}
	int isNumeric( const std::string &str ) {
		for (size_t i = 0; i < str.length(); i++) {
			if (i == 0 && (str[i] == '-' || str[i] == '+'))
				continue;
			if (!std::isdigit(str[i]))
				return 0;
		}
		return 1;
	}
	void printChar( std::string const &value ) {
	std::cout << "char: ";
		try {
			int i = std::atoi(value.c_str());
			if (i < 32 || i > 126)
				throw std::exception();
			char c = static_cast<char>(i);
			std::cout << "'" << c << "'" << std::endl;
		} catch (std::exception &e) {
			std::cout << "Non displayable" << std::endl;
		}
	}
	void printInt( std::string const &value ) {
		std::cout << "int: ";
		if (value == "nan" || !ScalarConverterUtils::isNumeric(value)) {
			std::cout << "impossible" << std::endl;
			return;
		}
		try {
			int i = std::atoi(value.c_str());
			std::cout << i << std::endl;
		} catch (std::exception &e) {
			std::cout << "impossible" << std::endl;
		}
	}
	void printFloat( std::string const &value ) {
		std::cout << "float: ";
		try {
			float f = ScalarConverterUtils::stringToFloat(value);
			std::cout << f;
			if (f == static_cast<int>(f))
				std::cout << ".0";
			std::cout << "f" << std::endl;
		} catch (std::exception &e) {
			std::cout << "impossible" << std::endl;
		}
	}
	void printDouble( std::string const &value ) {
		std::cout << "double: ";
		try {
			double d = ScalarConverterUtils::stringToDouble(value);
			std::cout << d;
			if (d == static_cast<int>(d))
				std::cout << ".0";
			std::cout << std::endl;
		} catch (std::exception &e) {
			std::cout << "impossible" << std::endl;
		}
	}
}