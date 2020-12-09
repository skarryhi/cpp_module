# include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title) {
    this->name = name;
    this->title = title; 
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other) : name(other.name), title(other.title) {
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&   Sorcerer::operator=(Sorcerer const &other) {
    this->name = other.name;
    this->title = other.title;
    return *this;
}

void        Sorcerer::showing() {
    std::cout << "I am " << this->name << ", " << this->title << ", and I like ponies!" << std::endl;
}

std::string     Sorcerer::getName() const {return this->name;}
std::string     Sorcerer::getTitle() const {return this->title;}

