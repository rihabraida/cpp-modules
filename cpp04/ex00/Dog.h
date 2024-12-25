
#ifndef Dog_H
# define Dog_H

#include "Animal.h"

class   Dog: public Animal{

public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &obj);
        ~Dog();
        void    makeSound() const;
};


#endif