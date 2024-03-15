/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:40:45 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/04 19:56:24 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <cstdlib>

static void exitError() {
    exit(1);
}

void Data::setOutfile(std::string filename) {
    this->_outfile.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
    if (!this->_outfile.is_open()) {
        std::cerr << "Error: " << filename << ".replace" << " Could not be created!" << std::endl;
        atexit(exitError);
    }
}

Data::Data(std::string filename, std::string s1, std::string s2) : 
            _infile(filename.c_str(), std::ios::in),
            _s1(s1),
            _s2(s2) {
    if (!this->_infile.is_open()) {
        std::cerr << "Error: " << filename << " Does not exist!" << std::endl;
        atexit(exitError);
    }
    else
        this->setOutfile(filename);
    this->_s1 = s1;
    this->_s2 = s2;
    return ;
}

Data::~Data() {
    this->_infile.close();
    this->_outfile.close();
    return ;
}

void Data::replaceCustom( void ) {
    for (std::string line; std::getline(this->_infile, line);) {
        size_t pos = 0;
        while ((pos = line.find(this->_s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + this->_s2 + line.substr(pos + this->_s1.length());
            pos += this->_s2.length();
        }
        this->_outfile << line << std::endl;
    }
}
