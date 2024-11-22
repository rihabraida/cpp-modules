
#ifndef Contact_H
#define Contact_H
#include <iostream>
#include <string>

class Zombie{

private:
        std::string name;
public:
        Zombie();
        Zombie(std::string name);
        void announce(void);
        ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif