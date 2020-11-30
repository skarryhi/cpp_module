# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Winx", 100, 100, 100, 100, 1, 30, 20, 5) {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: default constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: name constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other) {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: copy constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: default destructor colled" WHT << std::endl;
}

int         FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (this->energyPoints < 25)
        std::cout << BOLD " 🧚‍  (FT) Winx Club: " << this->name << " has too little energy" WHT << std::endl;
    else {
        std::string const    attacks[9] = {
            "Flower Twister",
            "Dragon Energy",
            "Falling Star",
            "Fire Blade",
            "Sound Flame",
            "Spring Shower",
            "Neon Splice",
            "Sun Storm",
            "Shadow Ray"
        };
        this->energyPoints -= 25;
        std::cout << BOLD " 🧚‍  (FT) Winx Club: " << this->name << WHT " makes "
            << attacks[std::rand() % 9] << " to "
            << target << std::endl;
    }
    return std::rand() % 40;
}
