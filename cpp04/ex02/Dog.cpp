
#include "Dog.h"


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
