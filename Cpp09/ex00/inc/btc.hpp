/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:02:39 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/25 16:59:40 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <exception>
#include <algorithm>
#include <string>
#include <sstream>
#include <ctime>
#include <cstring>
#include <map>

/* utils.cpp */
std::string removeWhitespace(const std::string& str);
bool	checkDate(struct tm& tm, const std::string& date);

/* parsing.cpp */
bool parseDbCsv(std::ifstream& ifs_csv, std::multimap<std::string, float>& dbCsv);
bool parse(char **argv, std::multimap<std::string, float>& dbCsv);