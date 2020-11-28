#include "Zombie.hpp"

Zombie::Zombie() {
    std::string const   names[11] = {
    "Alpha",
    "Beast",
    "Casanova",
    "Chieftain",
    "Clearheaded",
    "Сoolfire",
    "Commando",
    "Cowboy",
    "Detector",
    "Dragon",
    "Killer"
    };
    this->name = names[rand() % 11];
    std::string const   types[9] = {
    "White",
    "Blaсk",
    "Pink",
    "Yellow",
    "Gray",
    "Green",
    "Red",
    "Blue",
    "Cyan"
    };
    this->type = types[rand() % 9];
};

void        Zombie::announce() {
    std::cout << this->name << "(" << this->type << ")" << ": \"Meeeoow\"" << std::endl;
}

std::string     Zombie::getName() {
    return this->name;
}

std::string     Zombie::getType() {
    return this->type;
}

Zombie::~Zombie () {
    std::cout << BOLD << GRN << " 🔥  Zombie delete" << WHT << std::endl;
}