#include "ScavTrap.h"


int main()
{
     ScavTrap scav1("Scav");

    scav1.takeDamage(20);
    scav1.beRepaired(50);
    scav1.guardGate(); 
    scav1.attack("toto");

    ScavTrap scav2(scav1);
    scav2.attack("coco");

}