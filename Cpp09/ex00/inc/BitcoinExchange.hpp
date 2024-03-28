/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:02:39 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/28 16:13:59 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include <exception>
#include <algorithm>
#include <string>
#include <ctime>
#include <cstring>
#include <map>

class BitcoinExchange {
public:
    BitcoinExchange() {};
    ~BitcoinExchange() {};
    BitcoinExchange(const std::string& filename);
    std::string removeWhitespace(const std::string& str);
    bool checkDate(struct tm& tm, const std::string& date);
    void compare(std::string &date, double value);
    void processLine(const std::string& line);
    void parseDbCsv(std::ifstream& ifs_csv);
    void parse();
private:
    BitcoinExchange& operator=(const BitcoinExchange& src) { (void) src; return *this; };
    BitcoinExchange(const BitcoinExchange& src) { (void) src; };
    std::map<std::string, double> _dbCsv;
    std::string _filename;
};
