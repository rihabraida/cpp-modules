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






Dog::Dog() : Abstract_Animal() {
    this->type = "Dog";
    br = new  Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Abstract_Animal(other) {

    br = new Brain(*other.br);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &obj) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &obj) {
        Abstract_Animal::operator=(obj);
    }
    return *this;
}

Dog::~Dog() {
    delete br;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "I'm a Dog." << std::endl;
}






Cat::Cat() : Abstract_Animal() {
    this->type = "Cat";
    br = new  Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Abstract_Animal(other) {
    br = new Brain(*other.br);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &obj) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &obj) {
        Abstract_Animal::operator=(obj);
    }
    return *this;
}

Cat::~Cat() {
    delete br;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "I'm a Cat." << std::endl;
}