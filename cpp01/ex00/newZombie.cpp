#include "Zombie.hpp"

Zombie* newZombie(std::string name){

    Zombie *w1 = new Zombie(name);

    return(w1);
}