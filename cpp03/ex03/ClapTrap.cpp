
#include "ClapTrap.h"

ClapTrap::ClapTrap():Name(""),Hit_points(10),Energy_points(10),Attack_damage(0){
    std::cout <<  "ClapTrap Default  constructed .\n";
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), Hit_points(10), Energy_points(10), Attack_damage(0) {
     std::cout << "ClapTrap " << Name << " parameterized constructed.\n";
}

ClapTrap::~ClapTrap() {
        std::cout << "ClapTrap " << Name << " destructed.\n";
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap " << Name << " copy constructed.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if(this != &other)
    {
        Name = other.Name;
        Hit_points = other.Hit_points;
        Energy_points =  other.Energy_points;
        Attack_damage = other.Attack_damage;
    }
    std::cout << "ClapTrap Copy assignment operator .\n";
    return(*this);
}


void ClapTrap::attack(const std::string& target)
{
    if(Energy_points == 0 || Hit_points == 0)
    {     
        std::cout << "ClapTrap " << Name << " cannot attack\n" ;
        return;
    }
    Energy_points--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!\n";
   
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(Hit_points == 0)
    {    
        std::cout << "ClapTrap " << Name << " is already at 0 hit points\n";
        return;
    }
    if(amount >= Hit_points)
    {
         Hit_points = 0;
         std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage and is now at 0 hit points.\n";

    }
    else 
    {
        Hit_points -= amount;
        std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage and now has " << Hit_points << " hit points left.\n";
    }

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(Energy_points == 0 || Hit_points == 0)
    {
        std::cout << "ClapTrap " << Name << " cannot repair because it has no energy\n";
        return;
    }
    Energy_points--;
    Hit_points += amount; 
     std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " hit points and now has " << Hit_points << " hit points.\n";

}