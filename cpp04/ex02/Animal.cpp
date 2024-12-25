#include "Animal.h"

Abstract_Animal::Abstract_Animal()
{
    type = "Abstract_Animal";
     std::cout << "Abstract_Animal default constructor called" << std::endl;
}

Abstract_Animal::Abstract_Animal(const Abstract_Animal &other)
{
     *this = other;
     std::cout << "Abstract_Animal copy constructor called" << std::endl;
}
Abstract_Animal& Abstract_Animal:: operator=(const Abstract_Animal &obj)
{
    if(this != &obj)
    {
        this->type = obj.type;
    }
    std::cout << "Abstract_Animal Copy assignment operator called.\n";
  return(*this);
}

Abstract_Animal::~Abstract_Animal()
{
    std::cout << " Abstract_Animal destructor called.\n";
}

std::string Abstract_Animal::getType() const
{
    return(type);
}









