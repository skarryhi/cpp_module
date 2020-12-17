#include "Character.hpp"

Character::Character(std::string const& name) {
    this->name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = nullptr;
}
Character::Character(Character const& other) {
    this->name = other.name;
    for (int i = 0; i < 4; i++)
        inventory[i] = other.inventory[i];
}
Character&          Character::operator=(Character const& other) {
    this->name = other.name;
    for (int i = 0; i < 4; i++)
        inventory[i] = other.inventory[i];
    return *this;
}
Character::Character() {}
Character::~Character() {
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];
}
std::string const&  Character::getName() const {
    return name;
}
void                Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == nullptr) {
            inventory[i] = m;
            break ;
        }
    }
}
void                Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->AMateria::use(target);
}
void                Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && inventory[idx]) {
        inventory[idx] = nullptr;
    }
}