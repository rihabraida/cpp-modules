#ifndef ScavTrap_H
#define ScavTrap_H
#include <iostream>
#include <string>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap{

public :
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &obj);
    ScavTrap& operator=(const ScavTrap &obj);
    void attack(const std::string& target);
    ~ScavTrap();
    void guardGate();
};




#endif