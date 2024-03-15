/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseferi <eseferi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:51:21 by eseferi           #+#    #+#             */
/*   Updated: 2024/03/15 02:09:06 by eseferi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// constructors
Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
    std::cout << GREEN << "Bureaucrat " << this->_name << " created with the default constractor!" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) try : _name(name), _grade(grade)
{
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        std::cout << GREEN << "Bureaucrat " << this->_name << " created with the parameterized constractor!" << RESET << std::endl;
    }
}
catch(const std::exception& e)
{
    std::cerr << RED << e.what() << RESET << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) {
    std::cout << GREEN << "Bureaucrat " << this->_name << " created with the copy constractor!" << RESET << std::endl;
}

// destructor
Bureaucrat::~Bureaucrat() {
    std::cout << RED << "Bureaucrat " << this->_name << " destroyed!" << RESET << std::endl;
}

// operator overloads
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
    if (this != &src) {
        this->_grade = src.getGrade();
    }
    std::cout << CYAN << "Bureaucrat " << src._name << " assigned to " << this->_name << RESET << std::endl;
    return *this;
}

std::ostream &operator<<( std::ostream &out, const Bureaucrat &buro ) {
    out << YELLOW << buro.getName() << ", bureaucrat grade " << buro.getGrade() << RESET << std::endl;
    return out;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

void Bureaucrat::incrementGrade() {
    if (this->_grade - 1 < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade() {
    if (this->_grade + 1 > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else
        this->_grade++;
}

void Bureaucrat::signForm( AForm &form ) {
    if ( this->_grade > form.getGradeToSign() )
        std::cout << YELLOW << this->_name << " couldn't sign " << form.getName() << " because the grade is not right!" << RESET << std::endl;
    else if ( form.getSigned() )
        std::cout << YELLOW << this->_name << " couldn't sign " << form.getName() << " because the form is already signed!" << RESET << std::endl;
    else {
        form.beSigned( *this );
        std::cout << YELLOW << this->_name << " signed " << form.getName() << RESET << std::endl;
    }
}

// exceptions

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

void increment_byro(Bureaucrat &buro) try {
    buro.incrementGrade();
} catch (const Bureaucrat::GradeTooHighException &e) {
    std::cerr << MAGENTA << e.what() << RESET << std::endl;
}

void decrement_byro(Bureaucrat &buro) try {
    buro.decrementGrade();
} catch (const Bureaucrat::GradeTooLowException &e) {
    std::cerr << BLUE << e.what() << RESET << std::endl;
}

void Bureaucrat::executeForm( AForm const & form ) {
    try {
        form.execute( *this );
        std::cout << CYAN << this->_name << " executed " << form.getName() << RESET << std::endl;
    }
    catch (const AForm::GradeTooLowException& e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    catch (const AForm::FormNotSignedException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}
