/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:22:51 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/15 03:01:45 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main() {
    AForm *forms[3];
    Intern intern;
    forms[0] = intern.makeForm("shrubbery creation", "home");
    forms[1] = intern.makeForm("robotomy request", "target");
    forms[2] = intern.makeForm("presidential pardon", "target");
    Bureaucrat buro("buro", 1);
    buro.signForm(*forms[0]);
    buro.executeForm(*forms[0]);
    buro.signForm(*forms[1]);
    buro.executeForm(*forms[1]);
    buro.signForm(*forms[2]);
    buro.executeForm(*forms[2]);
    for (int i = 0; i < 3; i++) {
        delete forms[i];
    }
    return 0;
}