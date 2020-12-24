#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name), _grade(grade) {
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) {
    *this = other;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&         Bureaucrat::operator=(Bureaucrat const& other) {
    _grade = other._grade;
    return *this;
}

void                Bureaucrat::incrementGrade() {
    --_grade;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void                Bureaucrat::decrementGrade() {
    ++_grade;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char*     Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char*     Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

std::string    const& Bureaucrat::getName() const {return _name;}

int             Bureaucrat::getGrade() const {return _grade;}

std::ostream            &operator<<(std::ostream &out, Bureaucrat const& bureaucrat) {
    out << bureaucrat.getName() << ", grade: " << bureaucrat.getGrade();
    return out;
}