#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const& other) {*this = other;}

Intern::~Intern() {}

Intern&     Intern::operator=(Intern const&) {return *this;}

Form*       newRobForm(std::string const& target) {return new RobotomyRequestForm(target);}

Form*       newPresForm(std::string const& target) {return new PresidentialPardonForm(target);}

Form*       newShrubbForm(std::string const& target) {return new ShrubberyCreationForm(target);}

Form*        Intern::makeForm(std::string const& name, std::string const& target) {
    Form*    (*types[3])(std::string const &) = {
        &newRobForm,
        &newPresForm,
        &newShrubbForm
    };
    std::string const names[3] = {
        "Robotomy Request",
        "Presidential Pardon",
        "Shrubbery Creation"
    };
    for (int i = 0; i < 3; i++) {
        if (name == names[i]) {
            std::cout << "Intern creates " << names[i]  << " Form" << std::endl;
            return types[i](target);
        }
    }
    std::cout << "Form is not found" << std::endl;
    return nullptr;
}