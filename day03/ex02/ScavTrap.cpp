# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("W.I.T.H.", 100, 100, 50, 50, 1, 20, 15, 3) {
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: default constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3) {
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: name constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other) {
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: copy constructor colled" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: default destructor colled" WHT << std::endl;
}

void        ScavTrap::challengeNewcomer() {
    if (this->energyPoints < 25)
        std::cout << BOLD " 🧚‍  (ST) W.I.T.H.: " << this->name << " has too little energy" WHT << std::endl;
    else {
        std::string const    attacks[6] = {
            "Heart of Super Kandrakar",
            "Seal of Nerissa",
            "Heart of Aridia",
            "Heart of Zamballa ",
            "Heart of Meridian",
            "Heart of Kandrakar"
        };
        this->energyPoints -= 25;
        std::cout << BOLD " 🧚‍  (ST) W.I.T.H.: " << this->name << WHT " challenges newcomer: "
            << attacks[std::rand() % 6] << std::endl;
    }
}
