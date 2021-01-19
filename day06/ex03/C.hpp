#ifndef C_HPP
#define C_HPP

#include <string>
#include "Base.hpp"

class C: public Base {
public:
            C();
            C(C const&);
    virtual ~C();
    C&   operator=(C const&);
};

#endif