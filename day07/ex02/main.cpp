#include "Array.hpp"

int     main() {
    std::cout << "Test 1" << std::endl;
    Array<int> irray(30);
    for (int i = 0; i < 30; i++)
        irray[i] = (i + 1);
    try {
        for (int i = 0; i < 50; i++)
            std::cout << irray[i] << " ";
    }
    catch (std::exception const& e) {
        std::cerr << "\n" << e.what() << std::endl;
    }

    std::cout << "\nTest 2" << std::endl;
    Array<std::string> srray(3);
    try {
        for (int i = 0; i < 30; i++)
            srray[i] = "string";
    }
    catch (std::exception const& e) {
        try {
            for (int i = 0; i < 50; i++)
            std::cout << srray[i] << " ";
        }
        catch (std::exception const& e) {
            std::cerr << "\n" << e.what() << std::endl;
        }
        std::cerr << e.what() << std::endl;
    }
    return 0;
}