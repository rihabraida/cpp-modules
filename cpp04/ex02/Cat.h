
#ifndef Cat_H
# define Cat_H

#include "Animal.h"


class   Cat: public Abstract_Animal{
private:
        Brain* br;
public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &obj);
        ~Cat();
        void    makeSound() const;
};

#endif
