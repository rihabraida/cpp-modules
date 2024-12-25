#include "Animal.h" 
#include "Cat.h"
#include "Dog.h"
int main()
{
    Animal *tab[4];
    int i = 0;
    while(i < 2)
    {
        tab[i] = new Dog();
        i++;
    }
    while(i < 4)
    {
        tab[i] = new Cat();
        i++;
    }

    for (int i = 0; i < 4; i++)
        tab[i]->makeSound();
    
    for (int i = 0; i < 4; i++)
        delete tab[i];

return 0;
}
