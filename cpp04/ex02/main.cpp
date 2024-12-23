#include "Animal.h" 
#include "WrongAnimal.h"

int main()
{
const Abstract_Animal* j = new Dog();
const Abstract_Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();

    
return 0;
}
