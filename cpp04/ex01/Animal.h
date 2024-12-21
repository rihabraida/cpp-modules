
#ifndef Animal_H
# define Animal_H

#include <iostream>
#include <string>
#include "Brain.h"

class   Animal{

protected:
    std::string type;
public:
        Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &obj);
        virtual ~Animal();
        std::string getType() const;
        virtual void    makeSound() const;
};

class   Dog: public Animal{
private:
        Brain *br;
public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &obj);
        ~Dog();
        void    makeSound() const;
};

class   Cat: public Animal{
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