#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
                    PlasmaRifle();
                    ~PlasmaRifle();
    virtual void    attack() const;
};

#endif