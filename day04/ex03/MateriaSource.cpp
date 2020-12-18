#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        inventory[i] = nullptr;
    }
}
MateriaSource::MateriaSource(MateriaSource const& other) {
    for (int i = 0; i < 4; i++) {
        inventory[i] = other.inventory[i];
    }
}
MateriaSource&      MateriaSource::operator=(MateriaSource const& other) {
    for (int i = 0; i < 4; i++) {
        inventory[i] = other.inventory[i];
    }
    return *this;
}
MateriaSource::~MateriaSource() {}
void        MateriaSource::learnMateria(AMateria* source)  {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == nullptr) {
            inventory[i] = source;
            return;
        }
    }
}
AMateria*   MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] != nullptr) {
            if (inventory[i]->getType() == type) {
                return inventory[i];
            }
        }
    }
    return nullptr;
}