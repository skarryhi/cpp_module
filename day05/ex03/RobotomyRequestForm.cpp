#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other) : Form("RobotomyRequestForm", 72, 45), _target(other._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&    RobotomyRequestForm::operator=(RobotomyRequestForm const&) {
    return *this;
}

void            RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << " *TATATATATATATA* " << std::endl;
    if (std::rand() % 2 == 1)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomizing has been failed" << std::endl;
}