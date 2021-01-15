#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
private:
    std::string const   _name;
    bool                _signed;
    int const           _signGrade;
    int const           _reqGrade;
public:
                        Form(std::string const&, int const& sign, int const& req);
                        Form(Form const&);
    virtual             ~Form();
    Form&               operator=(Form const&);
    void                beSigned(Bureaucrat const&);
    std::string const&  getName() const;
    bool                getSigned() const;
    int                 getSignGrade() const;
    int                 getReqGrade() const;
    virtual void        execute(Bureaucrat const & executor) const;
    class FormIsNotSigned: public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream&           operator<<(std::ostream &out, Form const& form);

#endif