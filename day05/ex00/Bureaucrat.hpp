#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream&           operator<<(std::ostream &out, Bureaucrat const& bureaucrat);

#endif