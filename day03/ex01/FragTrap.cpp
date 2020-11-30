# include "FragTrap.hpp"

FragTrap::FragTrap() : hitPoints(100),
    maxHitPoints(100),
    energyPoints(100),
    maxEnergyPoints(100),
    level(1),
    name("Winx"),
    meleeAttackDamage(30),
    rangedAttackDamage(20),
    armorDamageReduction(5) {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: default constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

FragTrap::FragTrap(std::string const &name) : hitPoints(100),
    maxHitPoints(100),
    energyPoints(100),
    maxEnergyPoints(100),
    level(1),
    meleeAttackDamage(30),
    rangedAttackDamage(20),
    armorDamageReduction(5) {
    this->name = name;
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: name constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) {
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleeAttackDamage = other.meleeAttackDamage;
    this->rangedAttackDamage = other.rangedAttackDamage;
    this->armorDamageReduction = other.armorDamageReduction;
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: copy constructor colled" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: default destructor colled" WHT << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const &other) {
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleeAttackDamage = other.meleeAttackDamage;
    this->rangedAttackDamage = other.rangedAttackDamage;
    this->armorDamageReduction = other.armorDamageReduction;
    std::cout << YEL BOLD " 🧚‍  (FT) Winx Club: assignation operator called" WHT << std::endl;
    return *this;
}

int         FragTrap::rangedAttack(std::string const & target) {
    std::cout << BOLD " 🧚‍  (FT) Winx Club: " << this->name << " attacks " << target <<
    " at range, causing " << this->rangedAttackDamage <<  " points of damage!" WHT << std::endl;
    return this->rangedAttackDamage;
}

int         FragTrap::meleeAttack(std::string const & target) {
    std::cout << BOLD " 🧚‍  (FT) Winx Club: " << this->name << " attacks " << target <<
    " at melee, causing " << this->meleeAttackDamage <<  " points of damage!" WHT << std::endl;
    return this->meleeAttackDamage;
}

void        FragTrap::takeDamage(unsigned int amount) {
    int     a_official;
    a_official = amount - this->armorDamageReduction;
    if (a_official > 0) {
        this->hitPoints -= a_official;
        if (this->hitPoints < 0)
            this->hitPoints = 0;
    }
    std::cout << RED BOLD " 🧚‍  (FT) Winx Club: " << this->name << " take " << amount << " points of damage!" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

void        FragTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints < 100) {
        this->hitPoints += amount;
        if (this->hitPoints > 100)
            this->hitPoints = 100;
    }
    std::cout << GRN BOLD " 🧚‍  (FT) Winx Club: " << this->name << " heals for 🧁 " << amount << " points!" WHT <<
    "    ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
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

std::string FragTrap::getName() const {return this->name;}
