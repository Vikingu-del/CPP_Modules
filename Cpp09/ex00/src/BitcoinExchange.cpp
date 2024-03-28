/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:31:25 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/28 17:25:30 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& filename) : _filename(filename) {
    try { parse(); }
    catch (std::runtime_error &e) { std::cerr << e.what() << std::endl; }
}

void BitcoinExchange::parse() {
    std::ifstream ifs(this->_filename.c_str());
    if (!ifs.is_open())
        throw std::runtime_error("Error: Couldn't open file: " + this->_filename);
    try {
        std::ifstream ifs_csv("data.csv");
        if (!ifs_csv.is_open())
            throw std::runtime_error("Error: Couldn't find csv_database!");
        parseDbCsv(ifs_csv);
    } catch (std::runtime_error &e) {
        ifs.close();
        throw;
    }
    std::string line;
    if (!std::getline(ifs, line))
        throw std::runtime_error("Error: empty file");
    line = removeWhitespace(line);
    if (line != "date|value") {
        ifs.close();
        throw std::runtime_error("Error: bad header in the input file!");
    }
    std::string date;
    double value;
    while (std::getline(ifs, line)) {
        line = removeWhitespace(line);
        if (count(line.begin(), line.end(), '|') > 1 || line.find_first_not_of("0123456789-|") != std::string::npos) {
            std::cout << "Error: bad input" << std::endl;
            continue;
        }
        std::stringstream ss(line);
        std::getline(ss, date, '|');
        std::string valueStr;
        std::getline(ss, valueStr, '|');
        std::istringstream iss(valueStr);
        if (!(iss >> value)) {
            std::cout << "Error: bad input => " + date << std::endl;
            continue;
        }
        compare(date, value);
    }
    ifs.close();
}

bool	BitcoinExchange::checkDate(struct tm& tm, const std::string& date) {
	std::memset(&tm, 0, sizeof(tm));
	if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL)
		return false;
	tm.tm_isdst = -1;  // Tell mktime to determine whether daylight saving time is in effect
	if (mktime(&tm) == -1 || tm.tm_mday != std::atoi(date.substr(8, 2).c_str()))
		return false;
	return true;
}

void BitcoinExchange::parseDbCsv(std::ifstream& ifs_csv) {
    std::string line;
    if (!std::getline(ifs_csv, line))
        throw std::runtime_error("Error: empty csv file");
    line = removeWhitespace(line);
    if (line != "date,exchange_rate")
        throw std::runtime_error("Error: bad header in csv file <date,exchange_rate>");
    while (std::getline(ifs_csv, line)) {
        line = removeWhitespace(line);
        try { processLine(line); }
        catch ( std::runtime_error &e ) { throw std::runtime_error(e.what()); }
    }
}

void BitcoinExchange::processLine(const std::string& line) {
    std::stringstream ss(line);
    std::string date, valueStr;
    if (!std::getline(ss, date, ',') || !std::getline(ss, valueStr, ','))
        throw std::runtime_error("Error: format on csv <key,value>");
    struct tm tm;
    if (!checkDate(tm, date))
        throw std::runtime_error("Error: bad input in CSV db => " + date);
    std::istringstream iss(valueStr);
    double value;
    if (!(iss >> value))
        throw std::runtime_error("Error: Bad input");
    this->_dbCsv.insert(std::make_pair(date, value));
}

std::string	BitcoinExchange::removeWhitespace(const std::string& str) {
	std::string result;
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (!std::isspace(static_cast<unsigned char>(*it))) {
			result += *it;
		}
	}
	return result;
}

void	BitcoinExchange::compare(std::string &date, double value) {
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
	std::map<std::string, double>::iterator key = _dbCsv.find(date);
	if (key != _dbCsv.end())
		std::cout << date << " => " << value << " = " << value * key->second << std::endl; // add << std::fixed << std::setprecision(2) for more precission
	else {
		key = _dbCsv.upper_bound(date);
		if (key != _dbCsv.begin()) {
			--key;
			std::cout << date << " => " << value << " = " << value * key->second << std::endl; // add << std::fixed << std::setprecision(2) << 
		}
		else
			std::cout << "Error: bad input => " << date << std::endl;
	}
}
