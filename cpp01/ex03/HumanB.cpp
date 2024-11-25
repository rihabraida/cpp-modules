#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
} 
void HumanB::setWeapon(Weapon& W)
{
    this->W= &W;
}
void HumanB::attack()
{
    std::cout << name << " attacks with their " << W->getType() << "\n";
}