# include "Victim.hpp"

Victim::Victim(std::string const &name) {
    this->name = name;
    std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other) : name(other.name) {
    std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim() {
    std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim() {}

Victim&   Victim::operator=(Victim const &other) {
    this->name = other.name;
    return *this;
}

void      Victim::getPolymorphed() const {
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::string const&     Victim::getName() const {return this->name;}

std::ostream& operator<<(std::ostream &out, const Victim &point)
{
    out << "I am " << point.getName() << ", and I like otters!" << std::endl;
    return out;
}