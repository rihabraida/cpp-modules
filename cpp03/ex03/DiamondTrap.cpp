#include "DiamondTrap.h"


DiamondTrap::DiamondTrap(){

     std::cout <<  "DiamondTrap  Default  constructed  .\n";
}

DiamondTrap::DiamondTrap(std::string name){
   
    Name = name;
    ClapTrap(name + "_clap_name");
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;

  std::cout << "DiamondTrap  parameterized constructed.\n";
}


void DiamondTrap::whoAmI()
{
  std::cout << "MY name is " << Name << " the name of my baseclass is " << ClapTrap::Name << std::endl;

}