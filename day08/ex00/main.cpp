#include "easyfind.hpp"
#include <vector>
#include <list>

int     main() {
    std::vector<int> myVector;
    for (int count=0; count < 5; ++count)
        myVector.push_back(count);
    std::cout << "Test 1 (vector)" << std::endl;
    std::cout << *easyfind(myVector, 4) << std::endl;
    std::cout << "\nTest 2 (vector)" << std::endl;
    try {
        std::cout << *easyfind(myVector, 7) << std::endl;
    }
    catch (std::exception const&) {
        std::cout << "Not found" << std::endl;
    }
    {
        std::list<int> myVector;
        for (int count=0; count < 5; ++count)
            myVector.push_back(count);
        std::cout << "\nTest 3 (list)" << std::endl;
        std::cout << *easyfind(myVector, 1) << std::endl;
        std::cout << "\nTest 4 (list)" << std::endl;
        try {
            std::cout << *easyfind(myVector, 7) << std::endl;
        }
        catch (std::exception const&) {
            std::cout << "Not found" << std::endl;
        }
    }
    return 0;
}