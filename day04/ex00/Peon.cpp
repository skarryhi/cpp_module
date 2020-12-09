# include "Peon.hpp"

Peon::Peon(std::string const &name) {
    this->name = name;
    std::cout << "Some random victim called " << this->name << " just appeared!\n" << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other) {
    this->name = other.name;
    std::cout << "Some random victim called " << this->name << " just appeared!\n" << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon() {}

Peon&   Peon::operator=(Peon const &other) {
    this->name = other.name;
    return *this;
}

void      Peon::getPolymorphed() const {
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}


std::ostream& operator<<(std::ostream &out, const Peon &point)
{
    out << "I am " << point.getName() << ", and I like otters!" << std::endl;
    return out;
}
