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

Sorcerer::Sorcerer() {}

Sorcerer&   Sorcerer::operator=(Sorcerer const &other) {
    this->name = other.name;
    this->title = other.title;
    return *this;
}

void                   Sorcerer::polymorph(Victim const &victim) {
    victim.getPolymorphed();
}

std::string const&     Sorcerer::getName() const {return this->name;}
std::string const&     Sorcerer::getTitle() const {return this->title;}

std::ostream& operator<<(std::ostream &out, const Sorcerer &point)
{
    out << "I am " << point.getName() << ", " << point.getTitle() << ", and I like ponies!" << std::endl;
    return out;
}