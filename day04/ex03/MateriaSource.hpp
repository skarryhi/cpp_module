#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
    virtual             ~MateriaSource() {}
    virtual void        learnMateria(AMateria*);
    virtual AMateria*   createMateria(std::string const & type);
};

#endif