#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other) : Form("PresidentialPardonForm", 25, 5), _target(other._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const&) {
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}