#ifndef MateriaSource_H
# define MateriaSource_H

#include "AMateria.h"
#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource
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