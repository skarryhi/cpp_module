#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const& other) : AWeapon(other) {}

PowerFist::~PowerFist() {}

PowerFist&      PowerFist::operator=(PowerFist const& other) {
    this->name = other.name;
    this->ap = other.ap;
    this->damage = other.damage;
    return *this;
}

void    PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
