#include "Animal.h"

Animal::Animal()
{
    type = "Animal";
     std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
     *this = other;
     std::cout << "Animal copy constructor called" << std::endl;
}
Animal& Animal:: operator=(const Animal &obj)
{
    if(this != &obj)
    {
        this->type = obj.type;
    }
    std::cout << "Animal Copy assignment operator called.\n";
  return(*this);
}

Animal::~Animal()
{
    std::cout << " Animal destructor called.\n";
}

std::string Animal::getType() const
{
    return(type);
}

void Animal::makeSound() const
{
 std::cout << "I'm an animal.\n";
}



