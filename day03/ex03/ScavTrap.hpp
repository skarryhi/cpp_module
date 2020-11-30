#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(ScavTrap const &);
    ScavTrap(std::string const &);
    ~ScavTrap();
    int         challengeNewcomer(std::string const & target);
};

#endif