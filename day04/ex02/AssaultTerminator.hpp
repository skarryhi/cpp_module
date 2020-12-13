#ifndef ASSAULTTERMINATOR
#define ASSAULTTERMINATOR

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
                        AssaultTerminator();
                        AssaultTerminator(const AssaultTerminator&);
                        ~AssaultTerminator();
    AssaultTerminator&  operator=(AssaultTerminator const &);
    ISpaceMarine*       clone() const;
    void                battleCry() const;
    void                rangedAttack() const;
    void                meleeAttack() const;

};

#endif