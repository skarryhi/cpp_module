#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    Intern(Intern const&);
    ~Intern();
    Intern&     operator=(Intern const&);
    Form*        makeForm(std::string const&, std::string const&);
};

#endif