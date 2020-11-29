# include "FragTrap.hpp"

int     main() {
    std::srand(time(0));
    FragTrap    bloom("🍀 Bloom");
    FragTrap    flora(bloom);
    flora = FragTrap("🌼 Flora");

    bloom.takeDamage(flora.meleeAttack(bloom.getName()));
    flora.takeDamage(bloom.rangedAttack(flora.getName()));

    bloom.beRepaired(std::rand() % 88);

    bloom.takeDamage(flora.rangedAttack(bloom.getName()));
    flora.takeDamage(bloom.meleeAttack(flora.getName()));

    flora.beRepaired(std::rand() % 88);

    bloom.takeDamage(flora.vaulthunter_dot_exe(bloom.getName()));
    flora.takeDamage(bloom.vaulthunter_dot_exe(flora.getName()));
    
    return 0;
}