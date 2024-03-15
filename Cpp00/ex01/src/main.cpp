#include <iostream>
#include "PhoneBook.hpp"
#include <cstdlib>

int	main() {
	PhoneBook phoneBook;
	while (42)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::string command;
		std::getline(std::cin, command);
		if (command == "ADD") {
			std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
			parseContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
			phoneBook.setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
		}
		else if (command == "EXIT") {
			std::cout << "Exiting..." << std::endl;
			break;
		}
		else if (command == "SEARCH") {
			std::string index;
			while (true) {
				phoneBook.display();
				std::cout << "Enter index: ";
				std::getline(std::cin, index);
				if (!isValidSearch(index))
					break;
				int i = std::atoi(index.c_str());
				phoneBook.display(i);
					break ;
			}
		}
		else if (std::cin.eof())
			break;
	}
	return (0);
}