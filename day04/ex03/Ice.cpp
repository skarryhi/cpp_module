#include "Ice.hpp"

Ice::Ice() : AMateria("Ice") {}
Ice::~Ice() {}
void        Ice::use(ICharacter& target) {
    AMateria::use(target);
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
} 
AMateria*   Ice::clone() const {
    AMateria* newIce = new Ice;
    return newIce;
}