#include "DiamondTrap.h"


int main()
{
    DiamondTrap diamond1("Diamondy");

    diamond1.whoAmI();
     std::cout << "Hit Points: " << diamond1.ClapTrap::getName() << std::endl;
    // std::cout << "Energy Points: " << diamond1.ScavTrap::Energy_points << std::endl;
    // std::cout << "Attack Damage: " << diamond1.FragTrap::Attack_damage << std::endl;
    
    diamond1.attack("totop");
}