
#include"Zombie.hpp"

Zombie*  ZombieHorde( int N,std::string name)
{
    int i;
    if(N <= 0)
        return(NULL);
    
    Zombie* Z = new Zombie[N];

    for(i = 0; i < N ; i++)
    {
        Z[i].setName(name);
    }

    return(Z);
}