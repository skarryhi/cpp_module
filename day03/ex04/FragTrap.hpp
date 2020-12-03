#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
                        FragTrap(FragTrap const &);
                        FragTrap(std::string const &);
                        ~FragTrap();
    FragTrap&           operator=(FragTrap const &);
    virtual int         rangedAttack(std::string const & target);
    virtual int         meleeAttack(std::string const & target);
    virtual void        takeDamage(unsigned int amount);
    virtual void        beRepaired(unsigned int amount);
    int                 vaulthunter_dot_exe(std::string const & target);
};

#endif
