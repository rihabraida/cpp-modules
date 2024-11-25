
#include"Zombie.hpp"

Zombie*  ZombieHorde( int N,std::string name)
{
    int i;
//if n 
    Zombie* Z = new Zombie[N];

    for(i = 0; i < N ; i++)
    {
        Z[i].set// = Zombie(name);
    }


    // Zombie* Z[N];

    // for(i = 0; i < N; i++)
    // {
    //     Z[i] = new Zombie(name);
    // }
    return(Z);
}