#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
    NinjaTrap();
    NinjaTrap(NinjaTrap const &);
    NinjaTrap(std::string const &);
    ~NinjaTrap();
    int         ninjaShoebox(std::string const & target);
};

#endif