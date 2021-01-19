#ifndef BASE_HPP
#define BASE_HPP

#include <string>

class Base {
public:
            Base();
            Base(Base const&);
    virtual ~Base();
    Base&   operator=(Base const&);
};

#endif