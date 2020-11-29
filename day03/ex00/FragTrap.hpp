#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

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

class FragTrap {
public:
    FragTrap();
    FragTrap(FragTrap const &);
    FragTrap(std::string const &);
    ~FragTrap();
    FragTrap&   operator=(FragTrap const &);
    int         rangedAttack(std::string const & target);
    int         meleeAttack(std::string const & target);
    int         vaulthunter_dot_exe(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    std::string getName() const;
private:
    int         hitPoints;
    int         maxHitPoints;
    int         energyPoints;
    int         maxEnergyPoints;
    int         level;
    std::string name;
    int         meleeAttackDamage;
    int         rangedAttackDamage;
    int         armorDamageReduction;
};

#endif
