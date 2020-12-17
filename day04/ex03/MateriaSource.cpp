#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        inventory[i] = nullptr;
    }
}
MateriaSource::~MateriaSource() {}
void        MateriaSource::learnMateria(AMateria* source)  {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == nullptr) {
            inventory[i] = source;
            break;
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
}