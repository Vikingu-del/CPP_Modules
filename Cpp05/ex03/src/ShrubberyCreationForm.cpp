/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:40:41 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/15 02:48:29 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
    std::cout << GREEN << "ShrubberyCreationForm default constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137) {
    std::cout << GREEN << "ShrubberyCreationForm " << this->getName() << " created with the target constructor" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src) {
    std::cout << GREEN << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << GREEN << "ShrubberyCreationForm " << this->getName() << " destroyed!" << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
    if (this != &src) {
        AForm::operator=(src);
    }
    std::cout << GREEN << src.getName() << " assigned to " << this->getName() << std::endl;
    return *this;
}

void ShrubberyCreationForm::drawTree(std::string filename) const {
    std::ofstream file;
    file.open((filename + "_shrubbery").c_str() , std::ios::trunc);
    file << "      /\\      " << std::endl;
    file << "     /\\*\\     " << std::endl;
    file << "    /\\O\\*\\    " << std::endl;
    file << "   /*/\\/\\/\\   " << std::endl;
    file << "  /\\O\\/\\*\\/\\  " << std::endl;
    file << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    file << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    file << "      ||      " << std::endl;
    file <<      "      ||      " << std::endl;
    file <<      "      ||      " << std::endl;
    file << "      ||      " << std::endl;
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw AForm::GradeTooLowException();
    }
    if (!this->getSigned()) {
        throw AForm::FormNotSignedException();
    }
    this->drawTree("target");
}