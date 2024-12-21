#include "Animal.h" 
#include "WrongAnimal.h"

int main()
{
    Animal tab[4];
    int i = 0;
    while(i < 2)
    {
        tab[i] = Dog();
        i++;
    }
    while(i < 4)
    {
        tab[i] = Cat();
        i++;
    }

    

return 0;
}
