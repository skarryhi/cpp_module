#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::~Cure() {}
void        Cure::use(ICharacter& target) {
    std::cout <<  "* heals " << target.getName() << " wounds *" << std::endl;
    AMateria::use(target);
}
AMateria*   Cure::clone() const {
    AMateria* newCure = new Cure;
    return newCure;
}