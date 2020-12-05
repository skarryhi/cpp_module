#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
    NinjaTrap();
    NinjaTrap(NinjaTrap const &);
    NinjaTrap(std::string const &);
    ~NinjaTrap();
    int         ninjaShoebox(NinjaTrap const &);
    int         ninjaShoebox(ClapTrap const &);
    int         ninjaShoebox(FragTrap const &);
    int         ninjaShoebox(ScavTrap const &);
    std::string getName() const;
};

#endif