#ifndef B_HPP
#define B_HPP

#include <string>
#include "Base.hpp"

class B: public Base {
public:
            B();
            B(B const&);
    virtual ~B();
    B&   operator=(B const&);
};

#endif