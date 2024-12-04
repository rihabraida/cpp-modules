#include "Zombie.hpp"

int main()
{
    Zombie *w1 = newZombie("toto");
    randomChump("soso");
    w1->announce();
    delete w1;
}