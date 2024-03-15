// The grades of the Form follow the same rules that apply to the Bureaucrat. Thus,
// the following exceptions will be thrown if a form grade is out of bounds:
// Form::GradeTooHighException and Form::GradeTooLowException.
// Same as before, write getters for all attributes and an overload of the insertion («)
// operator that prints all the form’s informations.
// 7
// C++ - Module 05 Repetition and Exceptions
// Add also a beSigned() member function to the Form that takes a Bureaucrat as
// parameter. It changes the form status to signed if the bureaucrat’s grade is high enough
// (higher or egal to the required one). Remember, grade 1 is higher than grade 2.
// If the grade is too low, throw a Form::GradeTooLowException.
// Lastly, add a signForm() member function to the Bureaucrat. If the form got signed,
// it will print something like:
// <bureaucrat> signed <form>
// Otherwise, it will print something like:
// <bureaucrat> couldn’t sign <form> because <reason>.
// Implement and turn in some tests to ensure everything works as expected.

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _grade_to_sign(150), _grade_to_execute(1) {
    std::cout << GREEN << "AForm default constructor called" << RESET << std::endl;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) try : _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) {
    if (grade_to_sign < 1 || grade_to_execute < 1) {
        throw AForm::GradeTooHighException();
    }
    if (grade_to_sign > 150 || grade_to_execute > 150) {
        throw AForm::GradeTooLowException();
    }
    std::cout << GREEN << "AForm paremeterised constructor called" << RESET << std::endl;
} catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << std::endl;
}

AForm::AForm(const AForm &src) : _name(src._name), _signed(src._signed), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute) {
    std::cout << GREEN << "AForm copy constructor called" << std::endl;
}

AForm::~AForm() {
    std::cout << RED << "AForm " << this->_name << " destroyed!" << RESET << std::endl;
}

AForm &AForm::operator=(const AForm &src) {
    if (this != &src) {
        this->_signed = src._signed;
    }
    std::cout << CYAN << src._name << " assigned to " << this->_name << std::endl;
    return *this;
}

std::string AForm::getName() const {
    return this->_name;
}

bool AForm::getSigned() const {
    return this->_signed;
}

int AForm::getGradeToSign() const {
    return this->_grade_to_sign;
}

int AForm::getGradeToExecute() const {
    return this->_grade_to_execute;
}

std::ostream &operator<<( std::ostream &out, const AForm &src) {
    out << YELLOW << "AForm " << src.getName() << " is " << (src.getSigned() ? "signed" : "not signed") << " and requires grade " << src.getGradeToSign() << " to sign and grade " << src.getGradeToExecute() << " to execute" << RESET << std::endl;
    return out;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

const char *AForm::FormNotSignedException::what() const throw() {
    return "Form not signed!";
}

void AForm::beSigned( Bureaucrat &buro ) {
    try {
        if (buro.getGrade() <= this->_grade_to_sign) {
            this->_signed = true;
        } else {
            throw AForm::GradeTooLowException();
        }
    } catch (const std::exception &e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
}