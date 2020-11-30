# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

int     main() {
    std::srand(time(0));
    FragTrap    bloom("🍀 Bloom");
    ScavTrap    irma;
    NinjaTrap   сloe("🍑 Cloe");
    irma = ScavTrap("🌼 Irma");

    bloom.takeDamage(irma.meleeAttack(bloom.getName()));
    irma.takeDamage(bloom.rangedAttack(irma.getName()));

    bloom.beRepaired(std::rand() % 88);

    bloom.takeDamage(сloe.rangedAttack(bloom.getName()));
    irma.takeDamage(сloe.ninjaShoebox(irma.getName()));

    bloom.takeDamage(irma.rangedAttack(bloom.getName()));
    irma.takeDamage(bloom.meleeAttack(irma.getName()));

    irma.beRepaired(std::rand() % 88);

    bloom.takeDamage(irma.challengeNewcomer(bloom.getName()));
    irma.takeDamage(bloom.vaulthunter_dot_exe(irma.getName()));
    
    сloe.beRepaired(std::rand() % 88);

    сloe.takeDamage(irma.challengeNewcomer(сloe.getName()));
    сloe.takeDamage(bloom.vaulthunter_dot_exe(сloe.getName()));
    
    return 0;
}