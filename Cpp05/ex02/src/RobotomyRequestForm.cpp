/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 23:25:07 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/15 01:32:44 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cmath>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
    std::cout << GREEN << "RobotomyRequestForm " << this->getName() << " created with the default constractor!" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {
    std::cout << GREEN << "RobotomyRequestForm " << this->getName() << " created with the copy constractor!" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << RED << "RobotomyRequestForm " << this->getName() << " destroyed!" << RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    if (this != &src) {
        AForm::operator=(src);
    }
    std::cout << CYAN << "RobotomyRequestForm " << src.getName() << " assigned to " << this->getName() << RESET << std::endl;
    return *this;
}

void RobotomyRequestForm::robotomize(std::string const &target) const {
    std::cout << "Drilling noises..." << std::endl;
    if (rand() % 2) {
        std::cout << GREEN << target << " has been robotomized successfully!" << RESET << std::endl;
    }
    else {
        std::cout << RED << "Robotomy failed!" << RESET << std::endl;
    }
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw AForm::GradeTooLowException();
    }
    if (!this->getSigned()) {
        throw AForm::FormNotSignedException();
    }
    this->robotomize("target");
}