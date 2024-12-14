#ifndef FragTrap_H
#define FragTrap_H
#include <iostream>
#include <string>
#include "ClapTrap.h"

class FragTrap : public ClapTrap{

public :
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &obj);
    FragTrap& operator=(const FragTrap &obj);
    ~FragTrap();
    void highFivesGuys(void);
};




#endif