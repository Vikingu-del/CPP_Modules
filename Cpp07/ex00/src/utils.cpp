#include "Whatever.hpp"
#include <iostream>
#include <sstream>

int get_int(void) {
    while (42) {
        std::cout << "Enter 2 ints with the format <int1> <int2>: ";
        std::string command;
        std::getline(std::cin, command);
        std::istringstream iss(command);
        int int1, int2;
		if (command == "exit")
            return 0;
		else if (std::cin.eof())
			return (1);
        else if (iss >> int1 >> int2) {
            while (42) {
                std::cout << "int1 = " << int1 << " and int2 = " << int2 << std::endl;
                std::string function;
                std::cout << "Enter one of this functions(<swap> or <min> or <max> or <exit>): ";
                std::getline(std::cin, function);
                if (function == "swap") {
                    my_templates::swap(int1, int2);
                }
                else if (function == "min")
                    std::cout << "The min int is " << my_templates::min(int1, int2) << std::endl;
                else if (function == "max")
                    std::cout << "The max int is " << my_templates::max(int1, int2) << std::endl;
                else if (function == "exit")
            		break;
				else if (std::cin.eof())
					return (1);
                else
                    std::cout << "Function does not exist!" << std::endl;
            }
        }
        else
            std::cout << "incorrect" << std::endl;
    } 
}

int get_char(void) {
    while (42) {
        std::cout << "Enter 2 chars with the format <char1> <char2>: ";
        std::string command;
        std::getline(std::cin, command);
        std::istringstream iss(command);
        char char1, char2;
		if (command == "exit")
            return 0;
		else if (std::cin.eof())
			return (1);
        else if (iss >> char1 >> char2) {
            while (42) {
                std::cout << "char1 = " << char1 << " and char2 = " << char2 << std::endl;
                std::string function;
                std::cout << "Enter one of this functions(<swap> or <min> or <max> or <exit>): ";
                std::getline(std::cin, function);
                if (function == "swap") {
                    my_templates::swap(char1, char2);
                }
                else if (function == "min")
                    std::cout << "The min char is " << my_templates::min(char1, char2) << std::endl;
                else if (function == "max")
                    std::cout << "The max char is " << my_templates::max(char1, char2) << std::endl;
                else if (function == "exit")
            		break;
				else if (std::cin.eof())
					return (1);
                else
                    std::cout << "Function does not exist!" << std::endl;
            }
        }
        else
            std::cout << "incorrect" << std::endl;
    } 
}

int get_float(void) {
	while (42) {
        std::cout << "Enter 2 floats with the format <float1> <float2>: ";
        std::string command;
        std::getline(std::cin, command);
        std::istringstream iss(command);
        float float1, float2;
		if (command == "exit")
            return 0;
		else if (std::cin.eof())
			return (1);
        else if (iss >> float1 >> float2) {
            while (42) {
                std::cout << "float1 = " << float1 << " and float2 = " << float2 << std::endl;
                std::string function;
                std::cout << "Enter one of this functions(<swap> or <min> or <max> or <exit>): ";
                std::getline(std::cin, function);
                if (function == "swap") {
                    my_templates::swap(float1, float2);
                }
                else if (function == "min")
                    std::cout << "The min float is " << my_templates::min(float1, float2) << std::endl;
                else if (function == "max")
                    std::cout << "The max float is " << my_templates::max(float1, float2) << std::endl;
                else if (function == "exit")
            		break;
				else if (std::cin.eof())
					return (1);
                else
                    std::cout << "Function does not exist!" << std::endl;
            }
        }
        else
            std::cout << "incorrect" << std::endl;
    } 
}

int get_double(void) {
    while (42) {
        std::cout << "Enter 2 doubles with the format <double1> <double2>: ";
        std::string command;
        std::getline(std::cin, command);
        std::istringstream iss(command);
        double double1, double2;
		if (command == "exit")
            return 0;
		else if (std::cin.eof())
			return (1);
        else if (iss >> double1 >> double2) {
            while (42) {
                std::cout << "double1 = " << double1 << " and double2 = " << double2 << std::endl;
                std::string function;
                std::cout << "Enter one of this functions(<swap> or <min> or <max> or <exit>): ";
                std::getline(std::cin, function);
                if (function == "swap") {
                    my_templates::swap(double1, double2);
                }
                else if (function == "min")
                    std::cout << "The min double is " << my_templates::min(double1, double2) << std::endl;
                else if (function == "max")
                    std::cout << "The max double is " << my_templates::max(double1, double2) << std::endl;
                else if (function == "exit")
            		break;
				else if (std::cin.eof())
					return (1);
                else
                    std::cout << "Function does not exist!" << std::endl;
            }
        }
        else
            std::cout << "incorrect" << std::endl;
    } 
}

int get_string(void) {
	  while (42) {
        std::cout << "Enter 2 strings with the format <string1> <string2>: ";
        std::string command;
        std::getline(std::cin, command);
        std::istringstream iss(command);
        std::string string1, string2;
		if (command == "exit")
            return 0;
		else if (std::cin.eof())
			return (1);
        else if (iss >> string1 >> string2) {
            while (42) {
                std::cout << "string1 = " << string1 << " and string2 = " << string2 << std::endl;
                std::string function;
                std::cout << "Enter one of this functions(<swap> or <min> or <max> or <exit>): ";
                std::getline(std::cin, function);
                if (function == "swap") {
                    my_templates::swap(string1, string2);
                }
                else if (function == "min")
                    std::cout << "The min string is " << my_templates::min(string1, string2) << std::endl;
                else if (function == "max")
                    std::cout << "The max string is " << my_templates::max(string1, string2) << std::endl;
                else if (function == "exit")
            		break;
				else if (std::cin.eof())
					return (1);
                else
                    std::cout << "Function does not exist!" << std::endl;
            }
        }
        else
            std::cout << "incorrect" << std::endl;
    } 
}