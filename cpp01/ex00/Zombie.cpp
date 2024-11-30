#include "Zombie.hpp"

Zombie::Zombie(): name("") {};

Zombie::Zombie(std::string name) {

    this->name = name;
};
void Zombie::announce() 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(){
    std::cout << name << " is destroyed !!\n";
}