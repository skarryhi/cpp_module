#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(ScavTrap const &);
    ScavTrap(std::string const &);
    ~ScavTrap();
    void         challengeNewcomer();
    std::string getName() const;
};

#endif