#ifndef A_HPP
#define A_HPP

#include <string>
#include "Base.hpp"

class A: public Base {
public:
            A();
            A(A const&);
    virtual ~A();
    A&   operator=(A const&);
};

#endif