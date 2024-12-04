#include "Harl.hpp"


void Harl::debug(void)
{
    std::cout  << "Debug...\n";
}
void Harl::info(void)
{
    std::cout << "Info...\n"; 
}
void Harl::warning(void)
{
    std::cout << "Warning...\n"; 
}
void Harl::error(void)
{
    std::cout << "Error...\n";
}

void Harl::complain( std::string level )
{
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if(level == tab[i])
            break;
    }
    
    switch(i)
    {
        case 0:
                debug();
        case 1 :
                info();
        case 2 :
                warning();
        case 3 :
                error();
                break; 
        default:
            std::cout << "<DEBUG> <INFO> <WARNING> <ERROR>\n";
    }
}