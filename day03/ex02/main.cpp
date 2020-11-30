# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int     main() {
    std::srand(time(0));
    FragTrap    bloom("🍀 Bloom");
    ScavTrap    irma;
    irma = ScavTrap("🌼 Irma");

    bloom.takeDamage(irma.meleeAttack(bloom.getName()));
    irma.takeDamage(bloom.rangedAttack(irma.getName()));

    bloom.beRepaired(std::rand() % 88);

    bloom.takeDamage(irma.rangedAttack(bloom.getName()));
    irma.takeDamage(bloom.meleeAttack(irma.getName()));

    irma.beRepaired(std::rand() % 88);

    bloom.takeDamage(irma.challengeNewcomer(bloom.getName()));
    irma.takeDamage(bloom.vaulthunter_dot_exe(irma.getName()));
    
    return 0;
}