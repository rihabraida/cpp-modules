#include "Animal.h" 
#include "WrongAnimal.h"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();


std::cout << "----------WrongAnimal tests---------\n";
const WrongAnimal* k = new WrongCat();

std::cout << k->getType() << " " << std::endl;

k->makeSound();
return 0;
}