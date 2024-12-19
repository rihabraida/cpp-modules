
#ifndef Animal_H
# define Animal_H

#include <iostream>
#include <string>

class   Animal{

protected:
    std::string type;
public:
        Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &obj);
        ~Animal();
        std::string getType() const;
        void    makeSound() const;
};

class   Dog: public Animal{

public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &obj);
        ~Dog();
        void    makeSound() const;
};

class   Cat: public Animal{
public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &obj);
        ~Cat();
        void    makeSound() const;
};


#endif