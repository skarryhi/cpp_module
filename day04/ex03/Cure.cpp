#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}
Cure::~Cure() {}
void        Cure::use(ICharacter& target) {
    AMateria::use(target);
    std::cout <<  "* heals " << target.getName() << " wounds *" << std::endl;
}
AMateria*   Cure::clone() const {
    AMateria* newCure = new Cure;
    return newCure;
}