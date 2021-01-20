#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "\n Test 1" << std::endl;
    try {
        sp.addNumber(9);
        sp.addNumber(0);
    }
    catch (std::exception const&) {
        std::cout << "The list is already complete" << std::endl;
    }
    {
        std::cout << "\n Test 2" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        try {
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception const&) {
            std::cout << "The list is very short" << std::endl;
        }
        std::cout << "\n Test 3" << std::endl;
        sp.addNumber(5);
        try {
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception const&) {
            std::cout << "The list is very short" << std::endl;
        }
    }
}