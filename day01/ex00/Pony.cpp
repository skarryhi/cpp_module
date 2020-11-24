#include "Pony.hpp"

Pony::Pony() {
    std::cout << BOLD << CYN << " 🌟  Fluttershy wakes up" << WHT << std::endl;
    name = "Fluttershy";
    color = "Pink";
    old = 2;
    birthplace = "Stack";
}

Pony::Pony(std::string const &name, std::string const &color, int old) : name(name), color(color), old(old) {
    birthplace = "Heap";
    std::cout << GRN << BOLD << " 💫  " << name << " wakes up" << WHT << std::endl;
}

Pony::~Pony() {
    std::cout << YEL << " 🍓  " << name << " falls asleep"<< std::endl;
}

void    Pony::pony_story() {
    std::cout << " 🌈  Pony story:\n" << "   My name is " << name << ", I am " << color <<
    ", I was born in " << birthplace << " " << old << " yers ago" << std::endl;
}
