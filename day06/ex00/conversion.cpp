#include <iostream>
#include <stdexcept>
#include <iomanip>

void    conver(std::string const& str) {
    std::cout << "char: ";
    try {
        if (isascii(std::stoi(str))) {
            if (isprint(std::stoi(str)))
                std::cout << static_cast<char>(std::stoi(str)) << std::endl;
            else std::cout << "Non displayable" << std::endl;
        }
        else std::cout << "impossible" << std::endl;
    }
    catch (std::invalid_argument const&) {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "int: ";
    try {
        std::cout << std::stoi(str) << std::endl;
    }
    catch (std::invalid_argument const&) {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "float: ";
    try {
        std::cout << std::fixed  << std::setprecision(1) << std::stof(str) << "f" << std::endl;
    }
    catch (std::invalid_argument const&) {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "double: ";
    try {
        std::cout << std::fixed << std::setprecision(1) << std::stod(str) << std::endl;
    }
    catch (std::invalid_argument const&) {
        std::cout << "impossible" << std::endl;
    }
}

int     main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Wrong number of arguments" << std::endl;
        return 1;
    }
    std::string str = static_cast<std::string>(argv[1]);
    if (str == "-inf" || str == "+inf" || str == "nan") {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << std::stof(str) << "f" << std::endl;
        std::cout << "double: " << std::stof(str) << std::endl;
        return 0;
    }
    conver(str);
    return 0;
}