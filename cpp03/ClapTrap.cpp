ClapTrap::ClapTrap():Name(""),Hit_points(10),Energy_points(10),Attack_damage(0){}
ClapTrap::ClapTrap(std::string Name) : Name(Name), Hit_points(10), Energy_points(10), Attack_damage(0) {
     std::cout << "ClapTrap " << Name << " constructed.\n";
}
~ClapTrap() {
        std::cout << "ClapTrap " << Name << " destructed.\n";
    }

ClapTrap::void attack(const std::string& target)
{
    if(Energy_points == 0 || Hit_points == 0)
        return;
    Energy_points--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!\n";
   
}
ClapTrap::void takeDamage(unsigned int amount)
{
    if(Hit_points == 0)
        return;

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

ClapTrap::void beRepaired(unsigned int amount)
{
    if(Energy_points == 0 || Hit_points == 0)
    {
         return;
    }
    Energy_points--;
    Hit_points += amount; 
     std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " hit points and now has " << Hit_points << " hit points.\n";

}