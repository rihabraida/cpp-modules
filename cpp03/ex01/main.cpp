#include "ScavTrap.h"


int main()
{
    ScavTrap scav1("Scav");

    scav1.takeDamage(50);
    scav1.beRepaired(50);
    scav1.guardGate(); 
    scav1.attack("toto");


}