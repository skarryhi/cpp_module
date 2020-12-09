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

NinjaTrap&   NinjaTrap::operator=(NinjaTrap const &other) {
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleeAttackDamage = other.meleeAttackDamage;
    this->rangedAttackDamage = other.rangedAttackDamage;
    this->armorDamageReduction = other.armorDamageReduction;
    std::cout << YEL BOLD " 🧚‍  (NT) Bratz: assignation operator called" WHT << std::endl;
    return *this;
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

int        NinjaTrap::rangedAttack(const std::string &target) {
    std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << " attacks " << target <<
    " at range, causing " << this->rangedAttackDamage <<  " points of damage!" WHT << std::endl;
	return this->rangedAttackDamage;
}

int        NinjaTrap::meleeAttack(const std::string &target) {
    std::cout << BOLD " 🧚‍  (NT) Bratz: " << this->name << " attacks " << target <<
    " at melee, causing " << this->meleeAttackDamage <<  " points of damage!" WHT << std::endl;
	return this->meleeAttackDamage;
}

void    NinjaTrap::takeDamage(unsigned int amount) {
	amount -= this->armorDamageReduction;
	ClapTrap::takeDamage(amount);
    std::cout << RED BOLD " 🧚‍  (NT) Bratz: " << this->name << " take " << amount << " points of damage!" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

void    NinjaTrap::beRepaired(unsigned int amount) {
	ClapTrap::beRepaired(amount);
	std::cout << GRN BOLD " 🧚‍  (NT) Bratz: " << this->name << " heals for 🧁 " << amount << " points!" WHT <<
    "    ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}