#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const& other) : AMateria(other) {}

Ice&               Ice::operator=(Ice const& other) {
    return *this = other;
}

Ice::~Ice() {}

void        Ice::use(ICharacter& target) {
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
} 

AMateria*   Ice::clone() const {
    return new Ice();
}