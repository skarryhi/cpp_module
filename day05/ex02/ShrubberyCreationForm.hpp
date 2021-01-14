#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
    std::string const       _target;
public:
                            ShrubberyCreationForm(std::string const& target);
                            ShrubberyCreationForm(ShrubberyCreationForm const&);
    virtual                 ~ShrubberyCreationForm();
    ShrubberyCreationForm&  operator=(ShrubberyCreationForm const&);
    class OpenFailException: public std::exception {
        virtual const char* what() const throw();
	};
	class WriteFailException: public std::exception {
        virtual const char* what() const throw();
	};
    virtual void            execute(Bureaucrat const& executor) const;
};

#endif