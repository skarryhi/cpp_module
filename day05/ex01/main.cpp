#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat mike("Mike", 100);
    std::cout << mike << std::endl;
    Form lu17("lu17", 100, 10);
    std::cout << lu17 << std::endl;

    std::cout << "TEST 1" << std::endl;
    try {
        Form lu18("lu18", 180, 10);
        std::cout << lu18 << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "TEST 2" << std::endl;
    try {
        mike.signForm(lu17);
        std::cout << lu17 << std::endl;
        mike.signForm(lu17);
        std::cout << lu17 << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    } 
	return 0;
}
