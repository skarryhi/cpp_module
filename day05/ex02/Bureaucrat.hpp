#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat {
private:
    std::string const   _name;
    int                 _grade;
public:
                        Bureaucrat(std::string const&, int);
                        Bureaucrat(Bureaucrat const&);
    virtual             ~Bureaucrat();
    Bureaucrat&         operator=(Bureaucrat const&);
    std::string         const& getName() const;
    int                 getGrade() const;
    void                incrementGrade();
    void                decrementGrade();
    void                signForm(Form &);
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream            &operator<<(std::ostream &out, Bureaucrat const& bureaucrat);

#endif