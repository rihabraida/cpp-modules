#include "FragTrap.h"


FragTrap::FragTrap(){
     Name = "";
     Hit_points = 100;
     Energy_points = 100;
     Attack_damage = 30;
     std::cout <<  "FragTrap  Default  constructed  .\n";
}

FragTrap::FragTrap(std::string name){
     Name = name;
     Hit_points = 100;
     Energy_points = 100;
     Attack_damage = 30; 
  std::cout << "FragTrap  parameterized constructed.\n";
}
FragTrap::~FragTrap() {
        std::cout << "FragTrap  destructed.\n";
}


FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
    std::cout << "FragTrap  copy constructed.\n";
}

FragTrap& FragTrap::operator=(const FragTrap &obj){

     if(this != &obj)
          ClapTrap::operator=(obj);
    
     std::cout << "FragTrap Copy assignment operator .\n";
     return *this;
}
void FragTrap::highFivesGuys(void)
{
   std::cout << "Positive high fives request .\n";
}