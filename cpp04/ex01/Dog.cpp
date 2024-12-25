
#include "Dog.h"

Dog::Dog() : Animal() {
    this->type = "Dog";
    br = new  Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {

    br = new Brain(*other.br);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &obj) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &obj) {
        br = new Brain(*obj.br);
        Animal::operator=(obj);
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