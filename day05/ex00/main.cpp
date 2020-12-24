#include "Bureaucrat.hpp"

int main() {
    std::cout << "TEST 1" << std::endl;
    try {
	    Bureaucrat mike("Mike", 2);
        std::cout << mike << std::endl;
	    Bureaucrat ken("Ken", -1);
        std::cout << ken << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "TEST 2" << std::endl;
    try {
        Bureaucrat mike("Mike", 1);
        Bureaucrat liam("Liam", 40);
        std::cout << liam << std::endl;
        liam = mike;
        std::cout << liam << std::endl;
        liam.incrementGrade();
        std::cout << liam << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "TEST 3" << std::endl;
    try {
        Bureaucrat mike("Mike", 1000);
        std::cout << mike << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
	return 0;
}