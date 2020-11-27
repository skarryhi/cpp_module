#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanA.hpp"

class HumanB {
    public:
        HumanB(std::string);
        void    attack();
        void    setWeapon(Weapon &);
    private:
        std::string     name;
        Weapon*         weapon;
};

#endif