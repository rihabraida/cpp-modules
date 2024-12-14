#ifndef DiamondTrap_H
#define DiamondTrap_H
#include <iostream>
#include <string>
#include "ScavTrap.h"
#include "FragTrap.h"


class DiamondTrap :public FragTrap, public ScavTrap{

    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
   // DiamondTrap(const DiamondTrap &obj);
    //DiamondTrap& operator=(const DiamondTrap &obj);
   // ~DiamondTrap();
    void attack();
    void whoAmI();

};


#endif