# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(100),
    maxHitPoints(100),
    energyPoints(50),
    maxEnergyPoints(50),
    level(1),
    name("(CT) Princess"),
    meleeAttackDamage(20),
    rangedAttackDamage(15),
    armorDamageReduction(3) {
    std::cout << YEL BOLD " 🧚‍  (CT) Princess: default constructor colled" WHT << std::endl;
}

ClapTrap::ClapTrap(std::string name,
    int hitPoints = 100, int maxHitPoints = 100, int energyPoints = 100,
    int maxEnergyPoints = 100, int level = 100,
    int meleeAttackDamage = 100, int rangedAttackDamage = 100,
    int armorDamageReduction = 100) {
    this->name = name;
    this->hitPoints = hitPoints;
    this->maxHitPoints = maxHitPoints;
    this->energyPoints = energyPoints;
    this->maxEnergyPoints = maxEnergyPoints;
    this->level = level;
    this->meleeAttackDamage = meleeAttackDamage;
    this->rangedAttackDamage = rangedAttackDamage;
    this->armorDamageReduction = armorDamageReduction;
    std::cout << YEL BOLD " 🧚‍  (CT) Princess: name constructor colled" WHT << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) {
    *this = other;
    std::cout << YEL BOLD " 🧚‍  (CT) Princess: copy constructor colled" WHT << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << YEL BOLD " 🧚‍  (CT) Princess: default destructor colled" WHT << std::endl;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const &other) {
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleeAttackDamage = other.meleeAttackDamage;
    this->rangedAttackDamage = other.rangedAttackDamage;
    this->armorDamageReduction = other.armorDamageReduction;
    std::cout << YEL BOLD " 🧚‍  (CT) Princess: assignation operator called" WHT << std::endl;
    return *this;
}


int         ClapTrap::rangedAttack(std::string const & target) {
    std::cout << BOLD " 🧚‍  (CT) Princess: " << this->name << " attacks " << target <<
    " at range, causing " << this->rangedAttackDamage <<  " points of damage!" WHT << std::endl;
    return this->rangedAttackDamage;
}

int         ClapTrap::meleeAttack(std::string const & target) {
    std::cout << BOLD " 🧚‍  (CT) Princess: " << this->name << " attacks " << target <<
    " at melee, causing " << this->meleeAttackDamage <<  " points of damage!" WHT << std::endl;
    return this->meleeAttackDamage;
}

void        ClapTrap::takeDamage(unsigned int amount) {
    int     a_official;
    a_official = amount - this->armorDamageReduction;
    if (a_official > 0) {
        this->hitPoints -= a_official;
        if (this->hitPoints < 0)
            this->hitPoints = 0;
    }
    std::cout << RED BOLD " 🧚‍  (CT) Princess: " << this->name << " take " << amount << " points of damage!" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints < this->maxHitPoints) {
        this->hitPoints += amount;
        if (this->hitPoints > this->maxHitPoints)
            this->hitPoints = this->maxHitPoints;
    }
    std::cout << GRN BOLD " 🧚‍  (CT) Princess: " << this->name << " heals for 🧁 " << amount << " points!" WHT <<
    "    ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

std::string ClapTrap::getName() const {return this->name;}