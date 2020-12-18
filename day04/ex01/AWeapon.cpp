#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
    this->name = name;
    this->ap = apcost;
    this->damage = damage; 
}
AWeapon::AWeapon(AWeapon const& other) {
    this->name = other.name;
    this->ap = other.ap;
    this->damage = other.damage; 
}
AWeapon&            AWeapon::operator=(AWeapon const& other) {
    this->name = other.name;
    this->ap = other.ap;
    this->damage = other.damage;
    return *this;
}
AWeapon::AWeapon() {}
AWeapon::~AWeapon() {}

std::string const&  AWeapon::getName() const {return this->name;}
int                 AWeapon::getAPCost() const {return this->ap;}
int                 AWeapon::getDamage() const {
    attack();
    return this->damage;
}
