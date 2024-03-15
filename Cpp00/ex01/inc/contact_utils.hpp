#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP

# include "Contact.hpp"

// contact_utils.cpp
bool			isValidSearch(const std::string& str);
std::string 	parseContactName(std::string& firstName);
std::string 	parseContactLastName(std::string& lastName);
std::string 	parseContactNickName(std::string& nickName);
std::string 	parseContactPhoneNumber(std::string& phoneNumber);
std::string 	parseDarkestSecret(std::string& darkestSecret);
void			parseContact(std::string& firstName,
                                std::string& lastName,
                                std::string& nickName,
                                std::string& phoneNumber,
                                std::string& darkestSecret);

#endif