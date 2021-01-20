#include "span.hpp"

Span::Span(unsigned int n) : num(n) {}

Span::Span(Span const& other) {
    *this = other;
}

Span::~Span() {}

Span&   Span::operator=(Span const& other) {
    vec = other.vec;
    num = other.num;
    return *this;
}

void    Span::addNumber(int i) {
    if (vec.size() == num)
        throw std::exception();
    vec.push_back(i);
    std::sort(vec.begin(), vec.end());
}

int     Span::longestSpan() {
    if (vec.size() == 1 || !vec.size())
        throw std::exception();
    return vec.back() - vec.front();
}

int     Span::shortestSpan() {
    unsigned int size = vec.size();
    if (size == 1 || !size)
        throw std::exception();
    int res = vec.back() - vec.front();
    for (unsigned int i = size; i > 1; i--) {
        if (res > vec[i - 1] - vec[i - 2])
            res = vec[i - 1] - vec[i - 2];
    }
}