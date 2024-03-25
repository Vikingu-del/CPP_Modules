/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:02:39 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/25 17:51:52 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <exception>
#include <algorithm>
#include <string>
#include <ctime>
#include <cstring>
#include <map>

/* utils.cpp */
std::string removeWhitespace(const std::string& str);
bool	checkDate(struct tm& tm, const std::string& date);

/* parsing.cpp */
bool parseDbCsv(std::ifstream& ifs_csv, std::map<std::string, double>& dbCsv);
bool parse(char **argv, std::map<std::string, double>& dbCsv);