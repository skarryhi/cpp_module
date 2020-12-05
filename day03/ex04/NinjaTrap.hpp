#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
public:
                        NinjaTrap(NinjaTrap const &);
                        NinjaTrap(std::string const &);
                        ~NinjaTrap();
    NinjaTrap&          operator=(NinjaTrap const &);
    virtual int         rangedAttack(std::string const & target);
    virtual int         meleeAttack(std::string const & target);
    virtual void        takeDamage(unsigned int amount);
    virtual void        beRepaired(unsigned int amount);
    int         ninjaShoebox(NinjaTrap const &);
    int         ninjaShoebox(ClapTrap const &);
    int         ninjaShoebox(FragTrap const &);
    std::string getName() const;
};

#endif