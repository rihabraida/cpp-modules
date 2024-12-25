
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
        virtual ~Animal();
        std::string getType() const;
        virtual void    makeSound() const;
};





#endif