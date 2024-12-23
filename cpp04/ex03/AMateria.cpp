#include "AMateria.h"


AMateria::AMateria(): type(""){}


 AMateria::AMateria(const AMateria& other){
        *this = other;
 }


AMateria::AMateria(std::string const& type): type(type){}

 AMateria& AMateria::operator=(const  AMateria& other){
    if(this != &other)
        type = other.type;
    return(*this);
 }

std::string const& AMateria::getType() const{
        return(type);
}

AMateria::~AMateria(){}