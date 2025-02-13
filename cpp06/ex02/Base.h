#ifndef Base_H
# define Base_H

#include <iostream>
#include <string>
#include <exception> 
#include <bits/stdc++.h>

class Base{
public:
    Base();
    virtual ~Base();
};

void identify(Base& p);
void identify(Base* p);
Base * generate(void);


#endif