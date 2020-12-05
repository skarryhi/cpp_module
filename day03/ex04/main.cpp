# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "SuperTrap.hpp"

int     main() {
    std::srand(time(0));
    FragTrap    b("🍀 Bloom");
    FragTrap    bloom("Bloom");
    NinjaTrap   c("🍑 Cloe");
    NinjaTrap   cloe("Cloe");
    SuperTrap   u("🍋 Unicorn");
    SuperTrap   unicorn(u);

    bloom = b;
    cloe = c;
    std::cout << std::endl;

    bloom.takeDamage(cloe.rangedAttack(bloom.getName()));
    cloe.takeDamage(bloom.vaulthunter_dot_exe(cloe.getName()));
    std::cout << std::endl;

    bloom.beRepaired(std::rand() % 88);
    cloe.beRepaired(std::rand() % 88);
    std::cout << std::endl;

    cloe.takeDamage(bloom.meleeAttack(cloe.getName()));
    bloom.takeDamage(cloe.ninjaShoebox(bloom));
    std::cout << std::endl;

    unicorn.takeDamage(cloe.rangedAttack(unicorn.getName()));
    cloe.takeDamage(unicorn.vaulthunter_dot_exe(cloe.getName()));
    bloom.takeDamage(unicorn.ninjaShoebox(bloom));
    std::cout << std::endl;

    unicorn.beRepaired(std::rand() % 88);
    std::cout << std::endl;

    return 0;
}