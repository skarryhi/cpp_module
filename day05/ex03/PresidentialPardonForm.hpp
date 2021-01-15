#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    std::string const   _target;
public:
                            PresidentialPardonForm(std::string const& target);
                            PresidentialPardonForm(PresidentialPardonForm const&);
    virtual                 ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(PresidentialPardonForm const&);
    virtual void            execute(const Bureaucrat &executor) const;
};

#endif