

#ifndef HumanA_H
#define HumanA_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{

    std::string name;
    Weapon &W;
public:
   // HumanA();
    HumanA(std::string name ,Weapon &W);
    void attack();

};

#endif