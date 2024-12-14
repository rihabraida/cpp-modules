#include "ScavTrap.h"

ScavTrap::ScavTrap() {
     Name = "";
     Hit_points = 100;
     Energy_points = 50;
     Attack_damage = 20;
     std::cout <<  "ScavTrap  Default  constructed  .\n";
}

ScavTrap::ScavTrap(std::string name)  {
   
     Name = name;
     Hit_points = 100;
     Energy_points = 50;
     Attack_damage = 20;
  std::cout << "ScavTrap  parameterized constructed.\n";
}
ScavTrap::~ScavTrap() {
        std::cout << "ScavTrap  destructed.\n";
}


ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    
    std::cout << "ScavTrap  copy constructed.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj){

     if(this != &obj)
          ClapTrap::operator=(obj);
    
     std::cout << "Copy assignment operator called.\n";
     return *this;
}
void ScavTrap::guardGate()
{
     std::cout << " ScavTrap is now in Gate keeper mode.\n";
}

void ScavTrap::attack(const std::string& target)
{
    if(Energy_points == 0 || Hit_points == 0)
        return;
    Energy_points--;
    std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!\n";
   
}