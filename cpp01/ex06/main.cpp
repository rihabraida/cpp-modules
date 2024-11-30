#include "Harl.hpp"


int main(int ac,char **av)
{

    Harl Hl;
    
    if(ac == 2)
        Hl.complain(av[1]);
    else
        std::cout << "Invalid arguments\n";

}

   
    
