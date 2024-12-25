
#include "Cat.h"


Cat::Cat() : Animal() {
    this->type = "Cat";
    br = new  Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    br = new Brain(*other.br);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &obj) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &obj) {
        br = new Brain(*obj.br);
        Animal::operator=(obj);
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