#include "Character.hpp"

Character::Character(std::string const & name) : name(name), ap(40), weapon(nullptr) {}
Character::~Character() {}
std::string const&  Character::getName() const {return this->name;}
AWeapon* const&     Character::getWeapon() const {return this->weapon;}
int                 Character::getAp() const {return this->ap;}

void                Character::equip(AWeapon* weapon) {
    this->weapon = weapon;
}
void                Character::attack(Enemy* enemy) {
    if (this->weapon) {
        std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
        enemy->takeDamage(weapon->getDamage());
        if (enemy->getHP() <= 0)
            enemy->~Enemy();
        this->ap = this->ap - weapon->getAPCost();
    }
}

std::ostream& operator<<(std::ostream &out, const Character &character) {
    if (character.getWeapon())
        out << character.getName() << " has " << character.getAp() <<
        " AP and wields a " << character.getWeapon()->getName() << std::endl;
    else
        out << character.getName() << " has " << character.getAp() <<
        " AP and is unarmed" << std::endl;
    return out;
}