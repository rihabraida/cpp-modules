
#ifndef Weopen_H
#define Weopen_H

#include <iostream>
#include <string>

class   Weapon{

    std::string type;

public:
    Weapon();
    Weapon(std::string str);
    const std::string& getType();
    void setType(std::string str);
};


#endif