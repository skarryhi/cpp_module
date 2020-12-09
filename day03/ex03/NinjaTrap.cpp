# include "NinjaTrap.hpp"

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

std::string NinjaTrap::getName() const {return this->name;}

int         NinjaTrap::ninjaShoebox(NinjaTrap const &opponent) {
    if (this->energyPoints < 25)
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << " has too little energy" WHT << std::endl;
    else {
        this->energyPoints -= 25;
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << WHT " makes "
            << attacks[std::rand() % 9] << " to (NT) Bratz: "
            << opponent.getName() << std::endl;
    }
    return std::rand() % 40;
}

int         NinjaTrap::ninjaShoebox(FragTrap const &opponent) {
    if (this->energyPoints < 25)
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << " has too little energy" WHT << std::endl;
    else {
        this->energyPoints -= 25;
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << WHT " makes "
            << attacks[std::rand() % 9] << " to (FT) Winx Club: "
            << opponent.getName() << std::endl;
    }
    return std::rand() % 40;
}

int         NinjaTrap::ninjaShoebox(ScavTrap const &opponent) {
    if (this->energyPoints < 25)
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << " has too little energy" WHT << std::endl;
    else {
        this->energyPoints -= 25;
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << WHT " makes "
            << attacks[std::rand() % 9] << " to (ST) W.I.T.C.H.: "
            << opponent.getName() << std::endl;
    }
    return std::rand() % 40;
}

int         NinjaTrap::ninjaShoebox(ClapTrap const &opponent) {
    if (this->energyPoints < 25)
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << " has too little energy" WHT << std::endl;
    else {
        this->energyPoints -= 25;
        std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << WHT " makes "
            << attacks[std::rand() % 9] << " to (CT) Princess: "
            << opponent.getName() << std::endl;
    }
    return std::rand() % 40;
}