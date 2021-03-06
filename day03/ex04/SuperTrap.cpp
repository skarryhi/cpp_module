# include "SuperTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name) {
    std::cout << YEL BOLD " 🧚‍  (ST) Lol dolls: name constructor colled" WHT << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(other), FragTrap(other), NinjaTrap(other) {
    std::cout << YEL BOLD " 🧚‍  (ST) Lol dolls: copy constructor colled" WHT <<
    " ❤️  " << this->hitPoints << "/" << this->maxHitPoints << " ❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
}

SuperTrap::~SuperTrap() {
    std::cout << YEL BOLD " 🧚‍  (ST) Lol dolls: default destructor colled" WHT << std::endl;
}

std::string SuperTrap::getName() const {return this->name;}

SuperTrap&   SuperTrap::operator=(SuperTrap const &other) {
    this->hitPoints = other.hitPoints;
    this->maxHitPoints = other.maxHitPoints;
    this->energyPoints = other.energyPoints;
    this->maxEnergyPoints = other.maxEnergyPoints;
    this->level = other.level;
    this->name = other.name;
    this->meleeAttackDamage = other.meleeAttackDamage;
    this->rangedAttackDamage = other.rangedAttackDamage;
    this->armorDamageReduction = other.armorDamageReduction;
    std::cout << YEL BOLD " 🧚‍  (ST) Lol dolls: assignation operator called" WHT << std::endl;
    return *this;
}

int        SuperTrap::rangedAttack(const std::string &target) {
    return FragTrap::rangedAttack(target);
}

int        SuperTrap::meleeAttack(const std::string &target) {
    return NinjaTrap::meleeAttack(target);
}

void    SuperTrap::takeDamage(unsigned int amount) {
	amount -= this->armorDamageReduction;
    std::cout << RED BOLD " 🧚‍  (ST) Lol dolls: " << this->name << " take " << amount << " points of damage!" WHT <<
    " ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
	ClapTrap::takeDamage(amount);
}

void    SuperTrap::beRepaired(unsigned int amount) {
	std::cout << GRN BOLD " 🧚‍  (ST) Lol dolls: " << this->name << " heals for 🧁 " << amount << " points!" WHT <<
    "    ❤️ " << this->hitPoints << "/" << this->maxHitPoints << "❤️  " <<
    this->armorDamageReduction << "🛡 " << std::endl;
	ClapTrap::beRepaired(amount);
}