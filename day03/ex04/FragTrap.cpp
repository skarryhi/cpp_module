# include "FragTrap.hpp"

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

int        FragTrap::rangedAttack(const std::string &target) {
    std::cout << BOLD " 🧚‍  (FT) Winx Club: " << this->name << " attacks " << target <<
    " at range, causing " << this->rangedAttackDamage <<  " points of damage!" WHT << std::endl;
	return this->rangedAttackDamage;
}

int        FragTrap::meleeAttack(const std::string &target) {
    std::cout << BOLD " 🧚‍  (FT) Winx Club: " << this->name << " attacks " << target <<
    " at melee, causing " << this->meleeAttackDamage <<  " points of damage!" WHT << std::endl;
	return this->meleeAttackDamage;
}

void    FragTrap::takeDamage(unsigned int amount) {
	amount -= this->armorDamageReduction;
	ClapTrap::takeDamage(amount);
    std::cout << RED BOLD " 🧚‍  (FT) Winx Club: " << this->name << " take " << amount << " points of damage!" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount) {
	ClapTrap::beRepaired(amount);
	std::cout << GRN BOLD " 🧚‍  (FT) Winx Club: " << this->name << " heals for 🧁 " << amount << " points!" WHT <<
    "    ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}