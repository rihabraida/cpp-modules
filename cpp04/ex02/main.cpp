#include "Animal.h" 
#include "Dog.h"
#include "Cat.h"

int main()
{
const Abstract_Animal* j = new Dog();
const Abstract_Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();

    
return 0;
}
