# include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("Bratz", 60, 60, 120, 120, 1, 60, 5, 0) {
    std::cout << YEL BOLD " 🧚‍  (NT) Bratz: default constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
    std::cout << YEL BOLD " 🧚‍  (NT) Bratz: name constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(other) {
    std::cout << YEL BOLD " 🧚‍  (NT) Bratz: copy constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

NinjaTrap::~NinjaTrap() {
    std::cout << YEL BOLD " 🧚‍  (NT) Bratz: default destructor colled" WHT << std::endl;
}

int         NinjaTrap::ninjaShoebox(std::string const & target) {
    if (this->energyPoints < 25)
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << " has too little energy" WHT << std::endl;
    else {
        std::string const    attacks[9] = {
            "Tailed Beast Bomb",
            "Naruto's Special Jutsu",
            "One Thousand Years Of Death",
            "The Eight Gates",
            "Infinite Tsukoyomi",
            "Rasenshuriken",
            "Fart",
            "Reaper Death Seal",
            "Space-Time Migration"
        };
        this->energyPoints -= 25;
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << WHT " makes "
            << attacks[std::rand() % 9] << " to "
            << target << std::endl;
    }
    return std::rand() % 40;
}
