#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const& other) : AMateria(other) {}

Cure&               Cure::operator=(Cure const& other) {
    this->_xp = other._xp;
    this->_type = other._type;
    return *this;
}

Cure::~Cure() {}
void        Cure::use(ICharacter& target) {
    std::cout <<  "* heals " << target.getName() << " wounds *" << std::endl;
    AMateria::use(target);
}
AMateria*   Cure::clone() const {
    return new Cure();
}