# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : hitPoints(100),
    maxHitPoints(100),
    energyPoints(50),
    maxEnergyPoints(50),
    level(1),
    name("(ST) W.I.T.C.H."),
    meleeAttackDamage(20),
    rangedAttackDamage(15),
    armorDamageReduction(3) {
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: default constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : hitPoints(100),
    maxHitPoints(100),
    energyPoints(50),
    maxEnergyPoints(50),
    level(1),
    meleeAttackDamage(20),
    rangedAttackDamage(15),
    armorDamageReduction(3) {
    this->name = name;
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: name constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) {
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleeAttackDamage = other.meleeAttackDamage;
    this->rangedAttackDamage = other.rangedAttackDamage;
    this->armorDamageReduction = other.armorDamageReduction;
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: copy constructor colled" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: default destructor colled" WHT << std::endl;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const &other) {
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleeAttackDamage = other.meleeAttackDamage;
    this->rangedAttackDamage = other.rangedAttackDamage;
    this->armorDamageReduction = other.armorDamageReduction;
    std::cout << YEL BOLD " 🧚‍  (ST) W.I.T.C.H.: assignation operator called" WHT << std::endl;
    return *this;
}

int         ScavTrap::rangedAttack(std::string const & target) {
    std::cout << BOLD " 🧚‍  (ST) W.I.T.H.: " << this->name << " attacks " << target <<
    " at range, causing " << this->rangedAttackDamage <<  " points of damage!" WHT << std::endl;
    return this->rangedAttackDamage;
}

int         ScavTrap::meleeAttack(std::string const & target) {
    std::cout << BOLD " 🧚‍  (ST) W.I.T.H.: " << this->name << " attacks " << target <<
    " at melee, causing " << this->meleeAttackDamage <<  " points of damage!" WHT << std::endl;
    return this->meleeAttackDamage;
}

void        ScavTrap::takeDamage(unsigned int amount) {
    int     a_official;
    a_official = amount - this->armorDamageReduction;
    if (a_official > 0) {
        this->hitPoints -= a_official;
        if (this->hitPoints < 0)
            this->hitPoints = 0;
    }
    std::cout << RED BOLD " 🧚‍  (ST) W.I.T.H.: " << this->name << " take " << amount << " points of damage!" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

void        ScavTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints < 100) {
        this->hitPoints += amount;
        if (this->hitPoints > 100)
            this->hitPoints = 100;
    }
    std::cout << GRN BOLD " 🧚‍  (ST) W.I.T.H.: " << this->name << " heals for 🧁 " << amount << " points!" WHT <<
    "    ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
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

std::string ScavTrap::getName() const {return this->name;}
