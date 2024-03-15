#include "contact_utils.hpp"
#include <cstdlib>

bool isValidSearch(const std::string& str) {
    int strLen = str.length();
    for (int i = 0; i < strLen; i++) {
        if (i == 0 && (str[i] == '-' || str[i] == '+')) {
            i++;
        }
        if (!std::isdigit(str[i])) {
            std::cout << "Index must contain only numeric characters" << std::endl;
            return (false);
        }
    }
    return (true);
}

std::string parseContactName(std::string& firstName) {
    while (42) {
        std::cout << "Enter First Name: ";
        if (!std::getline(std::cin, firstName) || std::cin.eof())
            exit(0);
        if (firstName.empty())
            std::cout << "First Name cannot be empty" << std::endl;
        else
            break ;
    }
	return (firstName);
}

std::string parseContactLastName(std::string& lastName) {
	while (42) {
        std::cout << "Enter Last Name: ";
        if (!std::getline(std::cin, lastName) || std::cin.eof())
            exit(0);
        if (lastName.empty())
            std::cout << "First Name cannot be empty" << std::endl;
        else
            break ;
    }
	return (lastName);
}

std::string parseContactNickName(std::string& nickName) {
	while (42) {
        std::cout << "Enter Nick Name: ";
        if (!std::getline(std::cin, nickName) || std::cin.eof())
            exit(0);
        if (nickName.empty())
            std::cout << "Nick Name cannot be empty" << std::endl;
        else
            break ;
    }
	return (nickName);
}

std::string parseContactPhoneNumber(std::string& phoneNumber) {
    while (42) {
        std::cout << "Enter Phone Number: ";
        if (!std::getline(std::cin, phoneNumber) || std::cin.eof())
            exit(0);;
        if (phoneNumber.empty())
            std::cout << "Phone number cannot be empty" << std::endl;
        else
            break ;
    }
    return (phoneNumber);
}

std::string parseDarkestSecret(std::string& darkestSecret) {
    while (42) {
        std::cout << "Enter Darkest Secret: ";
        if (!std::getline(std::cin, darkestSecret) || std::cin.eof())
            exit(0);
        if (darkestSecret.empty())
            std::cout << "Darkest Secret cannot be empty" << std::endl;
        else
            break ;
    }
    return (darkestSecret);
}


void parseContact(std::string& firstName,
					std::string& lastName,
					std::string& nickName,
					std::string& phoneNumber,
					std::string& darkestSecret) {
    parseContactName(firstName);
    parseContactLastName(lastName);
    parseContactNickName(nickName);
    parseContactPhoneNumber(phoneNumber);
    parseDarkestSecret(darkestSecret);
}
