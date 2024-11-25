#ifndef HumanB_H
#define HumanB_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{

    Weapon *W;
    std::string name;
public:
    // HumanB();
    HumanB(std::string name);
    void setWeapon(Weapon& W);
    void attack();

};

#endif