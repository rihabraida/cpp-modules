#include "DiamondTrap.h"


DiamondTrap::DiamondTrap()  : ClapTrap("Default_clap_name"), FragTrap("default"), ScavTrap("default"), Name("Default")
{
  Hit_points = FragTrap::Hit_points;
  Energy_points = ScavTrap::Energy_points;
  Attack_damage = FragTrap::Attack_damage;
  std::cout <<  "DiamondTrap  Default  constructed  .\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") ,FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), Name(name)
{   
  Hit_points = FragTrap::Hit_points;
  Energy_points = ScavTrap::Energy_points;
  Attack_damage = FragTrap::Attack_damage;
  std::cout << "DiamondTrap  parameterized constructed.\n";
}

void DiamondTrap::whoAmI()
{
  std::cout << "MY name is " << Name << " the name of my baseclass is " << ClapTrap::Name << std::endl;

}