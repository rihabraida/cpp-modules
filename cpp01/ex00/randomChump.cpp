#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie Z = Zombie(name);
    std::cout << name << "is created statically \n";
    Z.announce();
}