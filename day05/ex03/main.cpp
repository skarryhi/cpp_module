#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
class Intern;

int main() {
    std::srand(time(0));
	Bureaucrat mike("Mike", 100);
	Bureaucrat mikky("Mikky", 1);
    std::cout << mike << std::endl;
    std::cout << mikky << std::endl;

    std::cout << "\nTEST 1" << std::endl;
    try {
        Form* lu18;
        Intern intern;
        lu18 = intern.makeForm("Presidential Pardon", "lu18");
        std::cout << *lu18 << std::endl;
        lu18->execute(mikky);
        lu18->execute(mike);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\nTEST 2" << std::endl;
    try {
        Form* lu18;
        Intern intern;
        lu18 = intern.makeForm("Pardon", "lu18");
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	return 0;
}
