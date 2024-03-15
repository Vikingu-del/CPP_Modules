/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:22:51 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/15 02:15:40 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main() {
    ShrubberyCreationForm form1;
    Bureaucrat buro("buro", 145);
    Bureaucrat buro2("buro2", 45);
    Bureaucrat buro3("buro3", 1);
    RobotomyRequestForm form2;
    PresidentialPardonForm form3;
    buro.signForm(form1);
    buro2.signForm(form1);
    buro.executeForm(form1);
    buro2.executeForm(form1);
    buro.signForm(form2);
    buro3.signForm(form2);
    buro.executeForm(form2);
    buro2.executeForm(form2);
    buro.signForm(form3);
    buro3.signForm(form3);
    buro3.executeForm(form3);
    return 0;
}