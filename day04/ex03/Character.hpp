#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
    Character(std::string const&);
    Character(Character const&);
                         ~Character();
    Character&      operator=(Character const&);
    virtual std::string const&  getName() const;
    virtual void                equip(AMateria* m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter& target);
private:
    Character();
    std::string     name;
};

#endif