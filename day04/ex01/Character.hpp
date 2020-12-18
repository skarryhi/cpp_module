#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
                        Character(std::string const & name);
                        Character(Character const&);
    Character&          operator=(Character const&);
                        ~Character();
    void                recoverAP();
    void                equip(AWeapon*);
    void                attack(Enemy*);
    std::string const&  getName() const;
    AWeapon* const&     getWeapon() const;
    int                 getAp() const;
private:
                        Character();
    std::string         name;
    int                 ap;
    AWeapon*            weapon;
};

std::ostream& operator<<(std::ostream &out, const Character &character);

#endif