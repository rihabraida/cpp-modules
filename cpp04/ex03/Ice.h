#ifndef Ice_H
# define Ice_H

#include "AMateria.h"


class Ice : public AMateria {
public:
    Ice();
    Ice(const Ice& other);
    Ice &operator=(const  Ice& other);
    virtual ~Ice();
    virtual AMateria* clone() const;

    //virtual void use(ICharacter& target);
};

#endif