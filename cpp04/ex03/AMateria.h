#ifndef AMateria_H
# define AMateria_H

#include <iostream>
#include <string>
#include "ICharacter.h"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const AMateria& other);
        AMateria &operator=(const  AMateria& other);
        AMateria(std::string const& type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria(); 

};



#endif