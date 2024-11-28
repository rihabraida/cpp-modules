#include "Harl.hpp"


int main(int ac,char **av)
{
    //Harl Hl;
    int i,start;
    std::string str = av[1];
    std::string level[4]= {"DEBUG",  "INFO", "WARNING", "ERROR"};
    if(ac == 2)
    {
        for( i = 0 ;i < 4; i++)
        { 
            if(av[1] == level[i])
                start = i;
        }
        for( i = start ; i < 4 ; i++) 
        { 
            switch(i)
            {
                case 0:
                    std::cout  << "Debug...\n";
                    break;
                case 1:
                    std::cout  << "info...\n";
                    break;
                case 2:
                    std::cout  << "warning...\n";
                    break; 
                case 3:
                    std::cout  << "error...\n";
                    break; 
                    
            }
        }
    }




    }

   
    
