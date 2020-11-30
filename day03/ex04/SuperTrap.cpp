# include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("Winx", 100, 100, 100, 100, 1, 30, 20, 5), FragTrap(), NinjaTrap() {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: default constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5), FragTrap(name), NinjaTrap(name) {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: name constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(other), FragTrap(), NinjaTrap() {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: copy constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

SuperTrap::~SuperTrap() {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: default destructor colled" WHT << std::endl;
}