#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <iomanip>
#include <sstream>

class Brain {
public:
    Brain();
    std::string     identify() const;
private:
    int             mass;
};

#endif