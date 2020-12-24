#include "Form.hpp"

Form::Form(std::string const& name, int const& sign,
                            int const& req) : _name(name),
                                            _signed(false),
                                            _signGrade(sign),
                                            _reqGrade(req) {
    if (_signGrade < 1 || _reqGrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_signGrade > 150 || _reqGrade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::Form(Form const& other) : _name(other._name),
                                _signGrade(other._signGrade),
                                _reqGrade(other._reqGrade) {
    *this = other;
}

Form&           Form::operator=(Form const& other) {
    _signed = other._signed;
    return *this;
}

Form::~Form() {}

void                Form::beSigned(Bureaucrat const& bur) {
    if (bur.getGrade() <= _signGrade)
        _signed = true;
}

std::string const&  Form::getName() const {return _name;}

bool           Form::getSigned() const {return _signed;}

int            Form::getSignGrade() const {return _signGrade;}

int            Form::getReqGrade() const {return _reqGrade;}

std::ostream&       operator<<(std::ostream &out, Form const& form) {
    if (form.getSigned())
        out << "SIGNED " << form.getName() << " form(" <<
        form.getSignGrade() << "/" << form.getReqGrade() << ")";
    else
        out << "NO SIGNED " << form.getName() << " form(" <<
        form.getSignGrade() << "/" << form.getReqGrade() << ")";
    return out;
}