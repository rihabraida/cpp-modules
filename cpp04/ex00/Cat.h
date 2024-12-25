
#ifndef Cat_H
# define Cat_H

#include "Animal.h"

class   Cat: public Animal{
public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &obj);
        ~Cat();
        void    makeSound() const;
};


#endif