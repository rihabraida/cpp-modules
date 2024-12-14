#include "FragTrap.h"


FragTrap::FragTrap():ClapTrap("", 100, 50, 20){
     std::cout <<  "FragTrap  Default  constructed  .\n";
}

FragTrap::FragTrap(std::string name):  ClapTrap(name,100,100,30)  {
   

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
    
     std::cout << "Copy assignment operator called.\n";
     return *this;
}
void FragTrap::highFivesGuys(void)
{

    std::cout << "positive high fives request .\n";
    
}