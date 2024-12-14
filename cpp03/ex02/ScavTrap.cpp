#include "ScavTrap.h"

ScavTrap::ScavTrap() :ClapTrap("", 100, 50, 20){
     std::cout <<  "ScavTrap  Default  constructed  .\n";
}

ScavTrap::ScavTrap(std::string name):  ClapTrap(name,100,50,20)  {
   

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
