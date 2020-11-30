# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

int     main() {
    std::srand(time(0));
    FragTrap    bloom("🍀 Bloom");
    NinjaTrap   сloe("🍑 Cloe");


    bloom.takeDamage(сloe.rangedAttack(bloom.getName()));
    сloe.takeDamage(bloom.vaulthunter_dot_exe(сloe.getName()));


    
    bloom.beRepaired(std::rand() % 88);
    сloe.beRepaired(std::rand() % 88);

    сloe.takeDamage(bloom.meleeAttack(сloe.getName()));
    bloom.takeDamage(сloe.ninjaShoebox(bloom.getName()));
    
    return 0;
}