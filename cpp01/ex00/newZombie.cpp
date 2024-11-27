#include "Zombie.hpp"

Zombie* newZombie(std::string name){

    Zombie w1 = Zombie(name);

    // void    *tmp = malloc(sizeof(Zombie));

    // Zombie* w1 = new (tmp) Zombie(name);

   std::cout << name << "is created dynamically\n";
    return(w1);
}