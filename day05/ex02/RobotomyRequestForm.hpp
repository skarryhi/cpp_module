#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
    std::string const       _target;
public:
                            RobotomyRequestForm(std::string const& target);
                            RobotomyRequestForm(RobotomyRequestForm const&);
    virtual                 ~RobotomyRequestForm();
    RobotomyRequestForm&    operator=(RobotomyRequestForm const&);
    virtual void            execute(const Bureaucrat &executor) const;
};

#endif