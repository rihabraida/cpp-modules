#include "Zombie.hpp"

Zombie* newZombie(std::string name){

    Zombie* w1 = new Zombie(name);

   // std::cout << name << "is created dynamically";
    return(w1);
}