#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
                        SuperTrap(SuperTrap const &);
                        SuperTrap(std::string const &);
                        ~SuperTrap();
    SuperTrap&          operator=(SuperTrap const &);
    virtual int         rangedAttack(std::string const & target);
    virtual int         meleeAttack(std::string const & target);
    virtual void        takeDamage(unsigned int amount);
    virtual void        beRepaired(unsigned int amount);
    std::string getName() const;
};

#endif