#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
private:
public:
                        Ice();
                        Ice(Ice const&);
    Ice&                operator=(Ice const&);
    virtual             ~Ice();
    virtual AMateria*   clone() const;
    virtual void        use(ICharacter& target);
};

#endif