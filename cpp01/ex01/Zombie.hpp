
#ifndef Contact_H
#define Contact_H
#include <iostream>
#include <string>

class Zombie{

private:
        std::string name;
public:
        Zombie();
        void setName(std::string name);
        void announce(void);
        ~Zombie();
};
Zombie*  ZombieHorde( int N,std::string name);
#endif