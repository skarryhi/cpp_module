#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap {
public:
    ScavTrap();
    ScavTrap(ScavTrap const &);
    ScavTrap(std::string const &);
    ~ScavTrap();
    ScavTrap&   operator=(ScavTrap const &);
    int         rangedAttack(std::string const & target);
    int         meleeAttack(std::string const & target);
    void        challengeNewcomer();
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