#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) {
    this->hp = hp;
    this->type = type;
}
Enemy::Enemy(Enemy const& other) {
    this->hp = other.hp;
    this->type = other.type;
}
Enemy&              Enemy::operator=(Enemy const& other) {
    this->hp = other.hp;
    this->type = other.type;
    return *this;
}
Enemy::Enemy() {}
Enemy::~Enemy() {}

std::string const&  Enemy::getType() const {return this->type;}
int                 Enemy::getHP() const {return this->hp;}

void        Enemy::takeDamage(int x) {
    if (this->hp)
        this->hp -= x;
    if (this->hp < 0)
        this->hp = 0;
}