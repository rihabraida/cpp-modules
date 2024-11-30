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

std::string     Lowercase(std::string level)
{
    int i = 0;
    while(level[i])
    {
        level[i] = (char)tolower(level[i]);
        i++;
    }
    return(level);
}
void Harl::complain( std::string level )
{
    int i;
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Harl::*tmp[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    
    for (i = 0; i < 4; i++)
    {
        if(level == tab[i])
            break;
    }
    if(i < 4)
        (this->*tmp[i])();
    else
        std::cout << "<DEBUG> <INFO> <WARNING> <ERROR>\n";

}