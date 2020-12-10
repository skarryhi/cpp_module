#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
}
void        SuperMutant::takeDamage(int x) {
    x -= 3;
    if (x > 0)
        Enemy::takeDamage(x);
}