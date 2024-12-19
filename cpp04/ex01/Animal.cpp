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
    std::cout << "Copy assignment operator called.\n";
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






Dog::Dog() : Animal() {
    this->type = "Dog";
    br = new  Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &obj) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &obj) {
        Animal::operator=(obj);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "I'm a Dog." << std::endl;
}






Cat::Cat() : Animal() {
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &obj) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &obj) {
        Animal::operator=(obj);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "I'm a Cat." << std::endl;
}