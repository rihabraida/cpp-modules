#ifndef MateriaSource_H
# define MateriaSource_H

#include "AMateria.h"

class MateriaSource
{
private:
    AMateria* templates[4];
public:
    MateriaSource();
    MateriaSource(MateriaSource const & other);
    MateriaSource& operator=(MateriaSource const & other);
    ~MateriaSource();
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};

#endif