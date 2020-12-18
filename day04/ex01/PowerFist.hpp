#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
                    PowerFist();
                    PowerFist(PowerFist const&);
    PowerFist&      operator=(PowerFist const&);
                    ~PowerFist();
    virtual void    attack() const;
};

#endif