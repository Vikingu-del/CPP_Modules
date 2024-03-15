/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:13:08 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/15 02:47:38 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
    std::cout << GREEN << "PresidentialPardonForm created with the default constractor!" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src) {
    std::cout << GREEN << "PresidentialPardonForm created with the copy constractor!" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5) {
    std::cout << GREEN << "PresidentialPardonForm created with the target constractor!" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << RED << "PresidentialPardonForm destroyed!" << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this != &src) {
        AForm::operator=(src);
    }
    std::cout << CYAN << "PresidentialPardonForm assigned to " << this->getName() << RESET << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw AForm::GradeTooLowException();
    }
    if (!this->getSigned()) {
        throw AForm::FormNotSignedException();
    }
    std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}