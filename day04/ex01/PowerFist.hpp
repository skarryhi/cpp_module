#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
                    PowerFist();
                    ~PowerFist();
    virtual void    attack() const;
};

#endif