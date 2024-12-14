#ifndef DiamondTrap_H
#define DiamondTrap_H
#include <iostream>
#include <string>
#include "ScavTrap.h"
#include "FragTrap.h"


class DiamondTrap :public FragTrap, public ScavTrap{

    std::string Name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
   // DiamondTrap(const DiamondTrap &obj);
    //DiamondTrap& operator=(const DiamondTrap &obj);
   // ~DiamondTrap();
    void whoAmI();

};


#endif