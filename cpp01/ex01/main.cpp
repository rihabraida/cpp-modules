#include "Zombie.hpp"

int main()
{
    int i ;
    int N = 3;
    Zombie *Z = ZombieHorde(N,"toto");
    if(Z)
    {
        for(i = 0; i < N; i++)
        {
            Z[i].announce();
        }
        delete [] Z;
    }
    return 0;
}