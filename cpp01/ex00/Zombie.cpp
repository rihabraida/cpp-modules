#include "Zombie.hpp"
Zombie::Zombie(): name("") {};

void Zombie::announce() 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...";
}

Zombie::~Zombie(){
    std::cout << name << " is destroyed !!";
}