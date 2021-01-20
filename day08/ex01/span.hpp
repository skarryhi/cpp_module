#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

class Span {
private:
    unsigned int        num;
    std::vector<int>    vec;
public:
            Span(unsigned int);
            Span(Span const&);
            ~Span();
    Span&   operator=(Span const&);
    void    addNumber(int);
    int     shortestSpan();
    int     longestSpan();
};


#endif