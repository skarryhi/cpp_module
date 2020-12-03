#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define WHITE	"\x1B[0m"
# define RED	"\x1B[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define BLU	"\x1B[34m"
# define MAG	"\x1B[35m"
# define CYN	"\x1B[36m"
# define WHT	"\x1B[37m"
# define BOLD	"\033[1m"

class ClapTrap {
public:
                        ClapTrap(ClapTrap const &);
                        ClapTrap(std::string const &name,
                            int hitPoints, int maxHitPoints, int energyPoints,
                            int maxEnergyPoints, int level,
                            int meleeAttackDamage, int rangedAttackDamage,
                            int armorDamageReduction);
                        ~ClapTrap();
    ClapTrap&           operator=(ClapTrap const &);
    virtual int         rangedAttack(std::string const & target);
    virtual int         meleeAttack(std::string const & target);
    virtual void        takeDamage(unsigned int amount);
    virtual void        beRepaired(unsigned int amount);
    std::string         getName() const;
protected:
    int                 hitPoints;
    int                 maxHitPoints;
    int                 energyPoints;
    int                 maxEnergyPoints;
    int                 level;
    std::string         name;
    int                 meleeAttackDamage;
    int                 rangedAttackDamage;
    int                 armorDamageReduction;
};

#endif