#include "Ice.h"


Ice::Ice(): AMateria("Ice"){}

Ice::Ice(const Ice& other) : AMateria(other){}

Ice &Ice::operator=(const  Ice& other){
    if(this != &other)
        AMateria::operator=(other);
    return(*this);
}


AMateria* Ice::clone() const {
        return new Ice(*this);
}

Ice::~Ice(){}