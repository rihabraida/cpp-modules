#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    W = NULL;
    this->name = name;
} 
void HumanB::setWeapon(Weapon& W)
{
    this->W= &W;
}
void HumanB::attack()
{
    if(W)
        std::cout << name << " attacks with their " << W->getType() << "\n";
    else 
        std::cout << name << " attacks with their (None)\n";//ma3ndoch
}