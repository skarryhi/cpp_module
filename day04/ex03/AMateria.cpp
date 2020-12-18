#include "AMateria.hpp"

AMateria::AMateria() : _xp(0) {}
AMateria::AMateria(std::string const & type) : _xp(0) {
    this->_type = type;
}
AMateria::AMateria(AMateria const& other) {
    this->_xp = other._xp;
    this->_type = other._type;
}
AMateria&           AMateria::operator=(AMateria const& other) {
    this->_xp = other._xp;
    this->_type = other._type;
    return *this;
}
AMateria::~AMateria() {}
std::string const&  AMateria::getType() const {return _type;}
unsigned int        AMateria::getXP() const {return _xp;}
void                AMateria::use(ICharacter& target) {
    (void)target;
    _xp += 10;
}