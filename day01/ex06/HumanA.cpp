#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon &type) : name(name), weapon(type) {}

void    HumanA::attack() {
    std::cout << BOLD YEL << this->name << " attacks with his " <<
    this->weapon.get_type() << WHT << std::endl;
}