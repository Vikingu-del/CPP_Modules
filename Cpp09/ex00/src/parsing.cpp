/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:30:00 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/26 10:30:01 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"
#include <iomanip>

void	compare(std::string &date, double value, std::map<std::string, double>& dbCsv) {
    struct tm tm;  // Initialize tm to zero
    if (!checkDate(tm, date))
        return ;
    if (value < 0) {
        std::cout << "Error: not a positive number." << std::endl;
        return ;
    }
    if (value > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return ;
    }
    std::map<std::string, double>::iterator key = dbCsv.find(date);
    if (key != dbCsv.end())
        std::cout << date << " => " << value << " = " << value * key->second << std::endl; // add << std::fixed << std::setprecision(2) for more precission
    else {
        key = dbCsv.upper_bound(date);
        if (key != dbCsv.begin()) {
            --key;  // Go to the previous key
            std::cout << date << " => " << value << " = " << value * key->second << std::endl; // add << std::fixed << std::setprecision(2) << 
        }
        else
            std::cout << "Error: bad input => " << date << std::endl;
    }
}

bool parseDbCsv(std::ifstream& ifs_csv, std::map<std::string, double>& dbCsv) {
    std::string line;
    bool isFirstLine = true;
    while (std::getline(ifs_csv, line)) {
        line = removeWhitespace(line);
        if (isFirstLine == true && line == "date,exchange_rate") {
            isFirstLine = false;
            continue;
        }
        isFirstLine = false;
        if (std::count(line.begin(), line.end(), ',') != 1) {
            std::cerr << "Error: There should be only one ',' character for deviding date and value" << std::endl;
            return false;
        }
        size_t pos = line.find(',');
        std::string date = line.substr(0, pos);
        std::string valueStr = line.substr(pos + 1);
        struct tm tm;
        if (!checkDate(tm, date)) {
            std::cerr << "Error in Csv_database!" << std::endl;
            return false;
        }
        double value = atof(valueStr.c_str());
        dbCsv.insert(make_pair(date, value));
    }
    return true;
}

bool parse(char **argv, std::map<std::string, double>& dbCsv) {
	std::ifstream ifs(argv[1]);
	if (!ifs.is_open()) {
		std::cerr << "Couldn't open file: " << argv[1] << std::endl;
		return false;
	}
	std::ifstream ifs_csv("data.csv");
	if (!ifs_csv.is_open()) {
		std::cerr << "Couldn't find csv_database!" << std::endl;
		return false;
	}
	if (!parseDbCsv(ifs_csv, dbCsv))
	{
		ifs.close();
		ifs_csv.close();
	}
    std::string line;
    bool isFirstLine = true;
    while (std::getline(ifs, line)) {
        line = removeWhitespace(line);
        if (isFirstLine && line == "date|value") {
            isFirstLine = false;
            continue;
        }
        if (std::count(line.begin(), line.end(), '|') > 1) {
            std::cerr << "Error: There should be only one '|' character for deviding date and value" << std::endl;
            return false;
        }
        size_t pos = line.find('|');
        std::string date = line.substr(0, pos);
        std::string valueStr = line.substr(pos + 1);
        double value = atof(valueStr.c_str());
        compare(date, value, dbCsv);
    }
	return true;
}