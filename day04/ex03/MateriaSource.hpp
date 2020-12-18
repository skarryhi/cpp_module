#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria*           inventory[4];
public:
                        MateriaSource();
                        MateriaSource(MateriaSource const&);
    MateriaSource&      operator=(MateriaSource const&);
    virtual             ~MateriaSource();
    virtual void        learnMateria(AMateria*);
    virtual AMateria*   createMateria(std::string const & type);
};

#endif