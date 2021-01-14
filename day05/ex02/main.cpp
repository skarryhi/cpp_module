#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    std::srand(time(0));
	Bureaucrat mike("Mike", 100);
	Bureaucrat mikky("Mikky", 1);
    std::cout << mike << std::endl;
    std::cout << mikky << std::endl;

    std::cout << "\nTEST 1" << std::endl;
    try {
        PresidentialPardonForm lu18("lu18");
        std::cout << lu18 << std::endl;
        lu18.execute(mikky);
        lu18.execute(mike);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\nTEST 2" << std::endl;
    try {
        PresidentialPardonForm lu18("lu18");
        std::cout << lu18 << std::endl;
        lu18.beSigned(mikky);
        lu18.execute(mikky);
        lu18.execute(mike);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\nTEST 3" << std::endl;
    try {
        RobotomyRequestForm lu18("lu18");
        std::cout << lu18 << std::endl;
        lu18.beSigned(mikky);
        lu18.execute(mikky);
        lu18.execute(mikky);
        lu18.execute(mikky);
        lu18.execute(mike);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\nTEST 4" << std::endl;
    try {
        Bureaucrat m("M", 150);
        ShrubberyCreationForm lu18("lu18");
        std::cout << lu18 << std::endl;
        lu18.beSigned(mikky);
        std::cout << lu18 << std::endl;
        lu18.execute(mikky);
        std::cout << lu18 << std::endl;
        lu18.execute(m);
        std::cout << lu18 << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	return 0;
}
