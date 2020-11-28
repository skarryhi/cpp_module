#include "Pony.hpp"

Pony::Pony() {
    std::cout << BOLD CYN " 🌟  Fluttershy wakes up" WHT << std::endl;
    this->name = "Fluttershy";
    this->color = "Pink";
    this->old = 2;
    this->birthplace = "Stack";
}

Pony::Pony(std::string const &name, std::string const &color, int old) : name(name), color(color), old(old) {
    this->birthplace = "Heap";
    std::cout << GRN BOLD << " 💫  " << this->name << " wakes up" WHT << std::endl;
}

Pony::~Pony() {
    std::cout << YEL " 🍓  " << this->name << " falls asleep" << std::endl;
}

void    Pony::pony_story() {
    std::cout << " 🌈  Pony story:\n" << "   My name is " << this->name << ", I am " << this->color <<
    ", I was born in " << this->birthplace << " " << this->old << " yers ago" << std::endl;
}
