#ifndef WrongAnimal_H
# define WrongAnimal_H

#include <iostream>
#include <string>

class  WrongAnimal{

protected:
    std::string type;
public:
       WrongAnimal();
       WrongAnimal(const WrongAnimal &other);
       WrongAnimal& operator=(const WrongAnimal &obj);
        ~WrongAnimal();
        std::string getType() const;
        void    makeSound() const;
};



class   WrongCat: public WrongAnimal{
public:
        WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat &obj);
        ~WrongCat();
        void    makeSound() const;
};


#endif