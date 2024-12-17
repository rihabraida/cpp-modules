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

DiamondTrap::DiamondTrap(const DiamondTrap &obj):FragTrap(obj),ScavTrap(obj)
{
  std::cout << "DiamondTrap  copy constructed.\n";
}

DiamondTrap&  DiamondTrap::operator=(const DiamondTrap &obj)
{

  if(this != &obj)
  {
    FragTrap::operator=(obj);
    ScavTrap::operator=(obj);
  }
  std::cout << "Copy assignment operator called.\n";
  return(*this);
}

DiamondTrap::~DiamondTrap(){
   std::cout << "DiamondTrap  destructed.\n";
}