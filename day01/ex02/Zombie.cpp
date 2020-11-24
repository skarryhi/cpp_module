#include "Zombie.hpp"

void        Zombie::announce() {
    std::cout << name << "(" << type << ")" << "Meeeoooowwwwwww" << std::endl;
}

void        Zombie::set_name(std::string const &name) {
    this->name = name;
}

void        Zombie::set_type(std::string const &type) {
    this->type = type;
}