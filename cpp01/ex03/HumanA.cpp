#include "HumanA.hpp"


HumanA::HumanA(std::string name ,Weapon& W) : name(name),W(W){}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << W.getType() << "\n";
}