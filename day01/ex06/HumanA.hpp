#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string const&, Weapon &);
    void            attack();
private:
    std::string     name;
    Weapon&         weapon;
};

#endif