/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:21:08 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/15 03:03:33 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
    std::cout << GREEN << "Intern created with the default constructor" << RESET << std::endl;
}

Intern::Intern(const Intern &src) {
    std::cout << GREEN << "Intern created with the copy constructor" << RESET << std::endl;
    *this = src;
}

Intern::~Intern() {
    std::cout << RED << "Intern destroyed!" << RESET << std::endl;
}

Intern &Intern::operator=(const Intern &src) {
    std::cout << CYAN << "Intern assigned to " << this << RESET << std::endl;
    (void)src;
    return *this;
}

AForm *Intern::makeForm(std::string formName, std::string target) {
    if (formName == "shrubbery creation") {
        std::cout << "Intern creates " << formName << std::endl;
        return new ShrubberyCreationForm(target);
    }
    else if (formName == "robotomy request") {
        std::cout << "Intern creates " << formName << std::endl;
        return new RobotomyRequestForm(target);
    }
    else if (formName == "presidential pardon") {
        std::cout << "Intern creates " << formName << std::endl;
        return new PresidentialPardonForm(target);
    }
    else {
        std::cout << "Intern can't create " << formName << " because it's not a valid form name" << std::endl;
        return NULL;
    }
}