
#ifndef Animal_H
# define Animal_H

#include <iostream>
#include <string>
#include "Brain.h"

class   Abstract_Animal{

protected:
    std::string type;
public:
        Abstract_Animal();
        Abstract_Animal(const Abstract_Animal &other);
        Abstract_Animal& operator=(const Abstract_Animal &obj);
        virtual ~Abstract_Animal();
        std::string getType() const;
        virtual void    makeSound() const = 0;
};

class   Dog: public Abstract_Animal{
private:
        Brain *br;
public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &obj);
        ~Dog();
        void    makeSound() const;
};

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