#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
    type = "Animal";
     std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
     *this = other;
     std::cout << "WrongAnimal copy constructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    if(this != &obj)
    {
        this->type = obj.type;
    }
    std::cout << "Copy assignment operator called.\n";
  return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << " WrongAnimal destructor called.\n";
}

std::string WrongAnimal::getType() const
{
    return(type);
}

void WrongAnimal::makeSound() const
{
 std::cout << "I'm an Animal.\n";
}


WrongCat::WrongCat() : WrongAnimal() {
    this->type = "Cat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj) {
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &obj) {
        WrongAnimal::operator=(obj);
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "I'm a Cat." << std::endl;
}