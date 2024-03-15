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

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _grade_to_sign(150), _grade_to_execute(1) {
    std::cout << GREEN << "Form default constructor called" << RESET << std::endl;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) try : _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) {
    if (grade_to_sign < 1 || grade_to_execute < 1) {
        throw Form::GradeTooHighException();
    }
    if (grade_to_sign > 150 || grade_to_execute > 150) {
        throw Form::GradeTooLowException();
    }
    std::cout << GREEN << "Form paremeterised constructor called" << RESET << std::endl;
} catch (const std::exception &e) {
    std::cerr << RED << e.what() << RESET << std::endl;
}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute) {
    std::cout << GREEN << "Form copy constructor called" << std::endl;
}

Form::~Form() {
    std::cout << RED << "Form " << this->_name << " destroyed!" << RESET << std::endl;
}

Form &Form::operator=(const Form &src) {
    if (this != &src) {
        this->_signed = src._signed;
    }
    std::cout << CYAN << src._name << " assigned to " << this->_name << std::endl;
    return *this;
}

std::string Form::getName() const {
    return this->_name;
}

bool Form::getSigned() const {
    return this->_signed;
}

int Form::getGradeToSign() const {
    return this->_grade_to_sign;
}

int Form::getGradeToExecute() const {
    return this->_grade_to_execute;
}

void Form::beSigned( Bureaucrat &buro ) {
    try {
        if (buro.getGrade() <= this->_grade_to_sign) {
            this->_signed = true;
        } else {
            throw Form::GradeTooLowException();
        }
    } catch (const std::exception &e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
}

std::ostream &operator<<( std::ostream &out, const Form &src) {
    out << YELLOW << "Form " << src.getName() << " is " << (src.getSigned() ? "signed" : "not signed") << " and requires grade " << src.getGradeToSign() << " to sign and grade " << src.getGradeToExecute() << " to execute" << RESET << std::endl;
    return out;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}