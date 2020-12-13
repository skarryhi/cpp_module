#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <string>
#include <iostream>

class Squad : public ISquad {
public:
                    Squad();
                    Squad(const Squad &);
    virtual         ~Squad();
    Squad&          operator=(Squad const &);
    ISpaceMarine*   getUnit(int) const;
    int             getCount() const;
    int             push(ISpaceMarine*);
private:
    int             count;
    ISpaceMarine    **squad;
};

#endif