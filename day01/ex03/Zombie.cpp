#include "Zombie.hpp"

Zombie::Zombie() : name("name"), type("white") {};

void        Zombie::announce() {
    std::cout << name << "(" << type << ")" << ": \"Meeeoow\"" << std::endl;
}

void        Zombie::set_name(std::string const &name) {
    this->name = name;
}

void        Zombie::set_type(std::string const &type) {
    this->type = type;
}

std::string     Zombie::give_name() {
    return name;
}

std::string     Zombie::give_type() {
    return type;
}

Zombie::~Zombie () {
    std::cout << BOLD << GRN << " 🔥  Zombie delete" << WHT << std::endl;
}