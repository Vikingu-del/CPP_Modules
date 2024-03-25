/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:01:48 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/25 17:14:04 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

std::string	removeWhitespace(const std::string& str) {
	std::string result;
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (!std::isspace(static_cast<unsigned char>(*it))) {
			result += *it;
		}
	}
	return result;
}

bool	checkDate(struct tm& tm, const std::string& date) {
	std::memset(&tm, 0, sizeof(tm));
	if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL) {
		std::cout << "Error: bad input => " << date << std::endl;
		return false;
	}
	tm.tm_isdst = -1;  // Tell mktime to determine whether daylight saving time is in effect
	if (mktime(&tm) == -1 || tm.tm_mday != std::atoi(date.substr(8, 2).c_str())) {
		std::cerr << "Error: bad input => " << date << std::endl;
		return false;
	}
	return true;
}
